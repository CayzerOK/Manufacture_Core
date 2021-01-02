// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ManufactureSubject.generated.h"

UCLASS()
class MANUFACTURE_CORE_API AManufactureSubject : public AActor
{
	GENERATED_BODY()
	
public:	
	AManufactureSubject();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
