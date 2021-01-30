// Fill out your copyright notice in the Description page of Project Settings.


#include "Manufactory.h"

AManufactory::AManufactory()
{
	PrimaryActorTick.bCanEverTick = false;

	InputInventory = CreateDefaultSubobject<UInventoryComponent>("InputInventory");
	OutputInventory = CreateDefaultSubobject<UInventoryComponent>("OutputInventory");
}

void AManufactory::BeginPlay()
{
	Super::BeginPlay();
}

void AManufactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

