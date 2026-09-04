#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YMapUnlockInfo.h"
#include "YMatchmakingBeginnerFlagSetup.h"
#include "YMatchmakingKDRSetup.h"
#include "YMatchmakingNVRSetup.h"
#include "YMatchmakingSetupEntry.h"
#include "YMatchmakingSetupMatchEntry.h"
#include "YMatchmakingSetupRow.generated.h"

USTRUCT(BlueprintType)
struct FYMatchmakingSetupRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMapUnlockInfo> mapUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchmakingSetupEntry stationSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMatchmakingSetupMatchEntry> matchSetups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchmakingBeginnerFlagSetup beginnerFlagRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxPlayersPerStationShard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxServersToCreatePerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pendingMatchmakingRequestTimeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool removeSessionsNotInPlayfab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> playFabErrorCodesCausingSessionRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchmakingNVRSetup nvrSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchmakingKDRSetup kdrSetup;
    
    PROSPECT_API FYMatchmakingSetupRow();
};

