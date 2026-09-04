#pragma once
#include "CoreMinimal.h"
#include "YMapUnlockStatus.generated.h"

USTRUCT(BlueprintType)
struct FYMapUnlockStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUnlockedLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUnlockedByAllSquadMates;
    
    PROSPECT_API FYMapUnlockStatus();
};

