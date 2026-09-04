#pragma once
#include "CoreMinimal.h"
#include "EYGameplayAttribute.h"
#include "EYPlayerStateBlueprint.h"
#include "YWeaponFireDelayStateData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponFireDelayStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerStateBlueprint m_playerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayAttribute m_gameplayAttribute;
    
    PROSPECT_API FYWeaponFireDelayStateData();
};

