#pragma once
#include "CoreMinimal.h"
#include "YWeakSpotData.generated.h"

USTRUCT(BlueprintType)
struct FYWeakSpotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isWeakspot;

    PROSPECT_API FYWeakSpotData();
};

