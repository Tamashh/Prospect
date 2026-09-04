#pragma once
#include "CoreMinimal.h"
#include "YPlayerUIHealthBarDeltaSettingsDetails.h"
#include "YPlayerUIHealthBarDeltaSettings.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerUIHealthBarDeltaSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerUIHealthBarDeltaSettingsDetails m_healthOwn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerUIHealthBarDeltaSettingsDetails m_shieldOwn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerUIHealthBarDeltaSettingsDetails m_healthOnCharacterPlates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerUIHealthBarDeltaSettingsDetails m_shieldOnCharacterPlates;
    
    PROSPECT_API FYPlayerUIHealthBarDeltaSettings();
};

