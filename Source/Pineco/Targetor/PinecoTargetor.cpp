// Copyright 2019-Present tarnishablec. All Rights Reserved.


#include "PinecoTargetor.h"

#include "Abilities/GameplayAbility.h"


// Sets default values
APinecoTargetor::APinecoTargetor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    this->ShouldProduceTargetDataOnServer = true;
    bReplicates = false;
    // bDestroyOnConfirmation = false;
}

void APinecoTargetor::StartTargeting(UGameplayAbility* Ability)
{
    Super::StartTargeting(Ability);
    SourceActor = Ability->GetCurrentActorInfo()->AvatarActor.Get();
}

void APinecoTargetor::ConfirmTargetingAndContinue()
{
    check(ShouldProduceTargetData());
    ensure(SourceActor);
    {
        bDebug = false;

        TArray<FHitResult> HitResults;
        PerformTraceMulti(HitResults);

        auto&& Handle = StartLocation.MakeTargetDataHandleFromHitResults(OwningAbility, HitResults);
        TargetDataReadyDelegate.Broadcast(Handle);
    }
}

void APinecoTargetor::PerformTraceMulti_Implementation(TArray<FHitResult>& HitResults)
{
}

void APinecoTargetor::Tick(const float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}
