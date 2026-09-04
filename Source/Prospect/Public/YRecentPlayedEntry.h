#pragma once
#include "CoreMinimal.h"
#include "YPlatformEntry.h"
#include "YOutpostFriendInfo.h"
#include "YRecentPlayedEntry.generated.h"

USTRUCT(BlueprintType)
struct FYRecentPlayedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlatformEntry m_platformEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOutpostFriendInfo m_friendInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_timeRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_friendInfoPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDebugEntry;
    
    PROSPECT_API FYRecentPlayedEntry();
};

