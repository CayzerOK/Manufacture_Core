#pragma once

#include "CoreMinimal.h"
#include "GameItem.h"
#include "ManufactureSubject.h"
#include "Relation.generated.h"

UENUM()
enum ERelationType
{
	Income UMETA(DisplayName = "Income"),
    Outcome UMETA(DisplayName = "Outcome"),
    Link UMETA(DisplayName = "TwoWay"),
};

USTRUCT(BlueprintType)
struct FRelation
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AManufactureSubject* Target;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERelationType> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Performance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UGameItem>> ItemTypes;
};

