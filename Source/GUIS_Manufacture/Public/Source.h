// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "InventoryComponent.h"
#include "GUIS.h"
#include "ManufactureSubject.h"

#include "Source.generated.h"
USTRUCT()
struct FSourceStruct
{
	GENERATED_BODY()
	UClass* ItemClass;
};

UCLASS()
class GUIS_MANUFACTURE_API ASource : public AManufactureSubject
{
	GENERATED_BODY()
	UPROPERTY()
	UGUIS* InvSubsystem;
	
public:	
	ASource();
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere)
	UInventoryComponent* Content;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameItem> SourceItem;
	
protected:
	virtual void BeginPlay() override;
};
