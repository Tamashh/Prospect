#pragma once
#include "CoreMinimal.h"
#include "YFriendAction.h"
#include "YSocialActionRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct FYSocialActionRequestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLocalUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_overwriteUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFriendAction> m_actions;
    
    PROSPECT_API FYSocialActionRequestEntry();
};

