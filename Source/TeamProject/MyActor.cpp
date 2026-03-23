#include "MyActor.h"



AMyActor::AMyActor()
{
	
	PrimaryActorTick.bCanEverTick = true;
}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Warning,TEXT("안녕하세요!!!BeginPlay"));
	
}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp,Warning,TEXT("안녕하세요!!!Tick"));
}

