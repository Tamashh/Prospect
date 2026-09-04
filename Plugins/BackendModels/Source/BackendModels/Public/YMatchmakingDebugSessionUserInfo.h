#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingBeginnerMode.h"
#include "YMatchmakingDebugSessionUserInfo.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYMatchmakingDebugSessionUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool allowsJoinDueToStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakingBeginnerMode beginnerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isShieldedSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bracketIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 transitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    FYMatchmakingDebugSessionUserInfo();
};

