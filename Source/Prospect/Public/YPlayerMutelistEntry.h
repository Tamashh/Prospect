#pragma once
#include "CoreMinimal.h"
#include "YPlayerMutelistEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerMutelistEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_mutedPlayerId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_chatMuted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_voicechatMuted;
    
    PROSPECT_API FYPlayerMutelistEntry();
};

