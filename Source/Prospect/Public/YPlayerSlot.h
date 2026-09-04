#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YPlayerSlot.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl m_uniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playerName;
    
    PROSPECT_API FYPlayerSlot();
};

