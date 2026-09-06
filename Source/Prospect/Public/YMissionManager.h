#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YCompletedMissionIdsUpdatedSignatureDelegate.h"
#include "YMissionDataUpdatedSignatureDelegate.h"
#include "YMissionRequestFailedSignatureDelegate.h"
#include "YOnCurrenciesUpdateDelegate.h"
#include "YOnMissionRewardsReceivedDelegate.h"
#include "YOnMissionItemsRemovedDelegate.h"
#include "YMissionManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYMissionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMissionRewardsReceived OnMissionRewardsReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMissionItemsRemoved OnMissionItemsRemoved;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMissionDataUpdatedSignature OnMissionDataUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCompletedMissionIdsUpdatedSignature OnCompletedMissionIdsUpdated;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesUpdate OnCurrenciesUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMissionRequestFailedSignature OnMissionRequestFailed;
    
    UYMissionManager();

};

