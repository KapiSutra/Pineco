﻿// Copyright 2019-Present tarnishablec. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimNotifies/AnimNotify_PlayMontageNotify.h"
#include "StructUtils/InstancedStruct.h"
#include "PinecoTargetorWindow.generated.h"

class APinecoTargetor;
/**
 * 
 */
UCLASS(DisplayName="Targetor Window (Pineco)")
class PINECO_API UPinecoTargetorWindow : public UAnimNotify_PlayMontageNotifyWindow
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Pineco")
    FInstancedStruct Payload;

    UPinecoTargetorWindow();
};
