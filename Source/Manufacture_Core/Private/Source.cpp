#include "Source.h"

#include "InventoryComponent.h"

ASource::ASource()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 9.0f;
	Content = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
}

void ASource::BeginPlay()
{
	Super::BeginPlay();
	this->SetActorTickEnabled(false);
}
void ASource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

