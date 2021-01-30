// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "InventoryComponent.h"
#include "ManufactureSubject.h"
#include "ResourceItem.h"

#include "Manufactory.generated.h"


USTRUCT(BlueprintType)
struct FRecipeStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> StatMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPartType> PrimaryPart;
	
};
UCLASS()
class GUIS_MANUFACTURE_API AManufactory : public AManufactureSubject
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
	TArray<TSubclassOf<UGameItem>> Product;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ACharacter*> Employers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EPartType>, UResourceItem*> Resources;

	UFUNCTION(BlueprintCallable, CustomThunk, meta=(CustomStructureParam = "ItemStruct"))
	UGameItem* CraftItem(UStruct* ItemStruct);
	
	
protected:
	virtual void BeginPlay() override;

private:
 	DECLARE_FUNCTION(execCraftItem)
 	{ 		
 		Stack.StepCompiledIn<FStructProperty>(nullptr);
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
 					FProperty* Property = Struct->CustomFindProperty(FName(Stat.Key));
 					void* PropPtr = StructPtr;
 					
 					if(Property)
 					{
 						UE_LOG(LogTemp, Warning, TEXT("Property Found!"));
 												
 						if(FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
 						{
 							const FString Operation = Stat.Value;
 							const FString Operator = Operation.Left(1);
 							const float Value = FCString::Atof(*Stat.Value.Right(Stat.Value.Len()-1));
 							
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
 								else
 								{
 									FloatNum = Value;
 								}
 								
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
 								else
 								{
 									IntNum = Value;
 								}
 								IntProperty->SetPropertyValue_InContainer(PropPtr, IntNum);
 							}
 						}
 						else if(FObjectProperty* ObjectProperty = CastField<FObjectProperty>(Property))
 						{
 							UObject* NewObject = LoadObject<UObject>(NULL, *Stat.Value);
						 
 							ObjectProperty->SetPropertyValue(PropPtr, NewObject);
 						}
 						else UE_LOG(LogTemp, Warning, TEXT("Property %s has unexpected non-numeric type %s"), *Stat.Key, *Property->GetClass()->GetName());
 						
 					} else UE_LOG(LogTemp, Warning, TEXT("Property %s is not found"), *Stat.Key);
 				}
 				
 			}
 		}
 		*static_cast<UGameItem**>(RESULT_PARAM) = P_THIS->GetGameInstance()->GetSubsystem<UGUIS>()->HandleStruct(StructProperty, StructPtr);
 		P_NATIVE_END
	}
};
