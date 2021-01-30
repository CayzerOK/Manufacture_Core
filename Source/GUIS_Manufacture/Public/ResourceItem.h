// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameItem.h"
#include "ResourceItem.generated.h"


UENUM(BlueprintType)
enum EPartType
{
	NoneType				UMETA(DisplayName = "None"),

	BladeSmall				UMETA(DisplayName = "Small Blade"),
	BladeMedium				UMETA(DisplayName = "Medium Blade"),
	BladeLarge				UMETA(DisplayName = "Large Blade"),

	HandleSmall				UMETA(DisplayName = "Handle"),
	HandleLarge				UMETA(DisplayName = "Large Handle"),

	BowShort				UMETA(DisplayName = "Short Bow Limb"),
	BowLong 				UMETA(DisplayName = "Long Bow Limb"),
};

USTRUCT(BlueprintType)
struct FStatInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> StatMap;
};

UCLASS(BlueprintType)
class GUIS_MANUFACTURE_API UResourceItem : public UGameItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EPartType>, FStatInfo> ItemStats;
};
