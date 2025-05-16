// Copyright 2019-Present tarnishablec. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "PinecoTargetor.generated.h"

UCLASS(Abstract)
class PINECO_API APinecoTargetor : public AGameplayAbilityTargetActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    APinecoTargetor();

    virtual void StartTargeting(UGameplayAbility* Ability) override;
    virtual void ConfirmTargetingAndContinue() override;

    UFUNCTION(BlueprintNativeEvent)
    void PerformTraceMulti(TArray<FHitResult>& HitResults);

    virtual void Tick(float DeltaSeconds) override;
};
