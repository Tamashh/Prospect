#pragma once
#include "CoreMinimal.h"
#include "YPingRestrictionSettings.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYPingRestrictionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> m_overridenValues;

    FYPingRestrictionSettings();
};

