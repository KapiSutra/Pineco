﻿// Copyright 2019-Present tarnishablec. All Rights Reserved.


#include "PinecoTargetor_Overlap.h"


// Sets default values
APinecoTargetor_Overlap::APinecoTargetor_Overlap()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    bDestroyOnConfirmation = false;
}

void APinecoTargetor_Overlap::ConfirmTargetingAndContinue()
{
    check(ShouldProduceTargetData());
    if (SourceActor)
    {
        SubmitHitResults();
    }
}


// Called every frame
void APinecoTargetor_Overlap::Tick(const float DeltaTime)
{
    Super::Tick(DeltaTime);

    CurrentHitResults.Reset(CurrentHitResults.Num());

    TArray<UPrimitiveComponent*> Components;
    OverlappingComponents(Components);
    for (auto&& Component : Components)
    {
        const auto& OverlapInfos = Component->GetOverlapInfos();
        for (const auto& OverlapInfo : OverlapInfos)
        {
            CurrentHitResults.Add(OverlapInfo.OverlapInfo);
        }
    }

    ConfirmTargeting();
}

void APinecoTargetor_Overlap::OverlappingComponents_Implementation(TArray<UPrimitiveComponent*>& Components)
{
}
