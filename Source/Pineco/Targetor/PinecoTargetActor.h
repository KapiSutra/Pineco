// Copyright 2019-Present tarnishablec. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "PinecoTargetActor.generated.h"

UCLASS()
class PINECO_API APinecoTargetActor : public AGameplayAbilityTargetActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    APinecoTargetActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
