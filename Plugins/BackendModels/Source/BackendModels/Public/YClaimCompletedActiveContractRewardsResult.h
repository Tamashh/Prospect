#pragma once
#include "CoreMinimal.h"
#include "EYClaimContractRewardsStatus.h"
#include "YActiveContractPlayerData.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YPlayerFactionProgressData.h"
#include "YClaimCompletedActiveContractRewardsResult.generated.h"

USTRUCT(BlueprintType)
struct FYClaimCompletedActiveContractRewardsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString claimedContractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString newContractIdOnBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> ItemsGranted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsUpdatedOrRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerFactionProgressData playerFactionProgressData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveContractPlayerData> contractsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClaimContractRewardsStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 updatedSeasonXp;
    
    BACKENDMODELS_API FYClaimCompletedActiveContractRewardsResult();
};

