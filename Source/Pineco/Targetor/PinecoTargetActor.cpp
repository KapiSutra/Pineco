// Copyright 2019-Present tarnishablec. All Rights Reserved.


#include "PinecoTargetActor.h"


// Sets default values
APinecoTargetActor::APinecoTargetActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APinecoTargetActor::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void APinecoTargetActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

