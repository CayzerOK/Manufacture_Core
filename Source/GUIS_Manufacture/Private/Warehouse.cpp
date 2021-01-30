// Fill out your copyright notice in the Description page of Project Settings.


#include "Warehouse.h"

AWarehouse::AWarehouse()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 8.0f;
	Content = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
}

void AWarehouse::BeginPlay()
{
	Super::BeginPlay();
	
}

