#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.h"
#include "YSocialPresenceEntry.generated.h"

USTRUCT(BlueprintType)
struct FYSocialPresenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPresencePlayerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 squadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString socialRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prospectorLevelXP;
    
    BACKENDMODELS_API FYSocialPresenceEntry();
};

