// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <string>


#include "InventoryComponent.h"
#include "ManufactureSubject.h"
#include "ResourceItem.h"

#include "Manufactory.generated.h"


UENUM(BlueprintType)
enum EOperations
{
	Decrease	UMETA(DisplayName = "Decrease"),
	Increase	UMETA(DisplayName = "Increase"),
	Multiply	UMETA(DisplayName = "Multiply"),
};

UCLASS()
class MANUFACTURE_CORE_API AManufactory : public AManufactureSubject
{
	GENERATED_BODY()
	
public:

	AManufactory();
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere)
	UInventoryComponent* InputInventory;

	UPROPERTY(EditAnywhere)
	UInventoryComponent* OutputInventory;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UItemBase>> Product;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ACharacter*> Employers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EResourceType>, UResourceItem*> Resources;

	UFUNCTION(BlueprintCallable, CustomThunk, meta=(CustomStructureParam = "ItemStruct"))
	UItemBase* CraftItem(UStruct* ItemStruct);
	
	
protected:
	virtual void BeginPlay() override;

private:
 	DECLARE_FUNCTION(execCraftItem)
 	{

 		Stack.Step(Stack.Object, nullptr);
        void* StructPtr = Stack.MostRecentPropertyAddress;
        FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);

 		P_FINISH;
 		
		P_NATIVE_BEGIN;
 		UScriptStruct* Struct = StructProperty->Struct;
 		
 		if(StructProperty)
 		{
 			
 			UE_LOG(LogTemp, Warning, TEXT("Struct founded!"));
 			
 			for (auto& Resource : P_THIS->Resources)
 			{
 				FStatInfo* Stats = Resource.Value->ItemStats.Find(Resource.Key);
 				
 				for (auto& Stat : Stats->StatMap)
 				{
 					TArray<FString> PropPath = {};
 					void* PropPtr = StructPtr;

 					Stat.Key.ParseIntoArray(PropPath, TEXT("."));

 					FProperty* Property = Struct->CustomFindProperty(FName(PropPath[0]));
 					
					int32 Num = PropPath.Num();
 					GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Cyan, FString::FromInt(Num));
 					if(Num>1)
 					{
 						UE_LOG(LogTemp, Warning, TEXT("Prop Is STRUCT!"));
 						for (int Index = 1; Index<Num; Index++)
 						{
 							if(FStructProperty* ElProp = CastField<FStructProperty>(Property))
 							{
 								UE_LOG(LogTemp, Warning, TEXT("StructPROP founded!"));
 								Property = ElProp->Struct->CustomFindProperty(FName(PropPath[Index]));
 								PropPtr = Property->ContainerPtrToValuePtr<void>(Property->GetOwnerProperty());
 							} 
 						}
 					}
 					
 					if(Property)
 					{
 						UE_LOG(LogTemp, Warning, TEXT("Property Found!"));
 						const FString Operation = Stat.Value;
 						const FString Operator = Operation.Left(1);
 						const float Value = FCString::Atof(*Stat.Value.Right(Stat.Value.Len()-1));
 						
 						if(FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
 						{
 							UE_LOG(LogTemp, Warning, TEXT("Property is numeric!"));
 							if(FFloatProperty* FloatProperty = CastField<FFloatProperty>(NumericProperty))
 							{
 								UE_LOG(LogTemp, Warning, TEXT("Property is float!"));
 								float FloatNum = FloatProperty->GetPropertyValue_InContainer(PropPtr);
 								if(Operator == "+")
 								{
 									FloatNum += Value;
 								}
 								else if(Operator == "-")
 								{
 									FloatNum -= Value;
 								}
 								else if(Operator == "*")
 								{
 									FloatNum *= Value;
 								}
 								else if(Operator == "/")
 								{
 									FloatNum /= Value;
 								}
 								else if(Operator == "^")
 								{
 									FloatNum = pow(FloatNum, Value);
 								}
 								else continue;
 								
 								FloatProperty->SetPropertyValue_InContainer(PropPtr, FloatNum);
 							}
 							else if(FIntProperty* IntProperty = CastField<FIntProperty>(NumericProperty))
 							{
 								UE_LOG(LogTemp, Warning, TEXT("Property is int!"));
 								int64 IntNum = IntProperty->GetPropertyValue_InContainer(PropPtr);
 								if(Operator == "+")
 								{
 									IntNum += Value;
 								}
 								else if(Operator == "-")
 								{
 									IntNum -= Value;
 								}
 								else if(Operator == "*")
 								{
 									IntNum *= Value;
 								}
 								else if(Operator == "/")
 								{
 									IntNum /= Value;
 								}
 								else if(Operator == "^")
 								{
 									IntNum = pow(IntNum, Value);
 								}
 								else continue;
 								IntProperty->SetPropertyValue_InContainer(PropPtr, IntNum);
 							}
 						}
 						
 					}
 				}
 				
 			}
 		}
 		*static_cast<UItemBase**>(RESULT_PARAM) = P_THIS->GetGameInstance()->GetSubsystem<UInventorySubsystem>()->HandleStruct(StructProperty, StructPtr);
 		P_NATIVE_END
	}
};
