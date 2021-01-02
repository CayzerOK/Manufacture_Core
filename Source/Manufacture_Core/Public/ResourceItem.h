// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemBase.h"
#include "ResourceItem.generated.h"


UENUM(BlueprintType)
enum EResourceType
{
	ToolHeadResource = 0		UMETA(DisplayName = "ToolHead"),
	ToolBindResource = 1		UMETA(DisplayName = "ToolBind"),
	ToolHandleResource = 2		UMETA(DisplayName = "ToolHandle"),
	ArmorCoverResource = 3		UMETA(DisplayName = "ArmorCover"),
	ArmorInnerResource = 4		UMETA(DisplayName = "ArmorInner"),
	ArmorSupportResource = 5	UMETA(DisplayName = "ArmorSupport"),
	ClothResource = 6			UMETA(DisplayName = "Cloth"),
	StitchResource = 7			UMETA(DisplayName = "Stitch"),
	BowLimbResource = 8			UMETA(DisplayName = "BowLimb"),
	AdditionalResource0 = 9		UMETA(DisplayName = "Additional0"),
	AdditionalResource1 = 10	UMETA(DisplayName = "Additional1"),
	AdditionalResource2 = 11	UMETA(DisplayName = "Additional2"),
	AdditionalResource3 = 12	UMETA(DisplayName = "Additional3")
};

USTRUCT(BlueprintType)
struct FStatInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> StatMap;
};

UCLASS(BlueprintType)
class MANUFACTURE_CORE_API UResourceItem : public UItemBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EResourceType>, FStatInfo> ItemStats;
};
