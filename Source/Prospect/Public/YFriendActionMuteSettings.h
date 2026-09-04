#pragma once
#include "CoreMinimal.h"
#include "YFriendActionMuteSettings.generated.h"

USTRUCT(BlueprintType)
struct FYFriendActionMuteSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxActionTowardsUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_minActionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeAllowanceAdditionalAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resetActionTracking;
    
    PROSPECT_API FYFriendActionMuteSettings();
};

