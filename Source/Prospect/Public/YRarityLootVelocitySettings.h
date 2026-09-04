#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YLootVelocitySettings.h"
#include "YRarityLootVelocitySettings.generated.h"

USTRUCT(BlueprintType)
struct FYRarityLootVelocitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemRarityType, FYLootVelocitySettings> m_rarityVelocitySettings;
    
    PROSPECT_API FYRarityLootVelocitySettings();
};

