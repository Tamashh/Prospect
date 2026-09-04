#pragma once
#include "CoreMinimal.h"
#include "YLootVelocitySettings.generated.h"

USTRUCT(BlueprintType)
struct FYLootVelocitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxLootSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minLootSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lootSpawnAngleDegrees;
    
    PROSPECT_API FYLootVelocitySettings();
};

