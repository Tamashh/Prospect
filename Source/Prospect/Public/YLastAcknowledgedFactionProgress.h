#pragma once
#include "CoreMinimal.h"
#include "YLastAcknowledgedFactionProgress.generated.h"

USTRUCT(BlueprintType)
struct FYLastAcknowledgedFactionProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_factionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_factionLevelXP;
    
    PROSPECT_API FYLastAcknowledgedFactionProgress();
};

