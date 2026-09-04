#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOnRetentionBonusDataReceivedDelegate.h"
#include "YOnRetentionBonusDataRequestFailedDelegate.h"
#include "YRetentionProgress.h"
#include "YRetentionBonusFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYRetentionBonusFunctions : public UObject {
    GENERATED_BODY()
public:
    UYRetentionBonusFunctions();

    UFUNCTION(BlueprintCallable)
    static void RequestRetentionBonusData(UObject* objCtx, FYOnRetentionBonusDataReceived delegateSuccess, FYOnRetentionBonusDataRequestFailed delegateFail);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYRetentionProgress GetRetentionProgress();
    
};

