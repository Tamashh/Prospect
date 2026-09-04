#pragma once
#include "CoreMinimal.h"
#include "EYOverrideShowWeapon.h"
#include "YFullscreenCrosshairData.generated.h"

class UYWidget_FullScreenCrosshair;

USTRUCT(BlueprintType)
struct FYFullscreenCrosshairData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_FullScreenCrosshair> m_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYOverrideShowWeapon m_weaponVisibilityWhileTargetingOverride;
    
    PROSPECT_API FYFullscreenCrosshairData();
};

