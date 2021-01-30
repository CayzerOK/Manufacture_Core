// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "InventoryComponent.h"
#include "GameFramework/Actor.h"
#include "Warehouse.generated.h"

UCLASS()
class GUIS_MANUFACTURE_API AWarehouse : public AActor
{
	GENERATED_BODY()
	

public:	
	AWarehouse();
	UPROPERTY()
	UInventoryComponent* Content;
protected:
	virtual void BeginPlay() override;
};
