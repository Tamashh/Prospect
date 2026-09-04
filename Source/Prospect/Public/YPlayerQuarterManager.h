#pragma once
#include "CoreMinimal.h"
#include "YPlayerQuartersLevelUpdated.h"
#include "YTechTreeNodeStatus.h"
#include "UObject/Object.h"
#include "YOnBackendResponseReceivedSignatureDelegate.h"
#include "YOnCurrenciesUpdatedDelegate.h"
#include "YOnCustomItemsUpdatedDelegate.h"
#include "YOnItemsRemovedDelegate.h"
#include "YPlayerQuarterPurchaseFailureDelegate.h"
#include "YPlayerQuartersLevelAvailableSignatureDelegate.h"
#include "YTechTreeNodesUpdatedSignatureDelegate.h"
#include "YPlayerQuarterManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYPlayerQuarterManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTechTreeNodesUpdatedSignature TechTreeNodesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerQuarterPurchaseFailure PlayerQuarterPurchaseFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomItemsUpdated CustomItemsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemsRemoved itemsRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesUpdated CurrenciesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerQuartersLevelAvailableSignature PlayerQuartersLevelAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnBackendResponseReceivedSignature OnBackendResponseReceived;
    
    UYPlayerQuarterManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTechTreeNodesAvailable(const FString& UserId, const TArray<FYTechTreeNodeStatus>& techTreeNodes, const int32& remainingTimeInSeconds) const;
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerQuartersLevelAvailable(const FYPlayerQuartersLevelUpdated& playerQuarterLevelUpdated, const int32& remainingTimeInSeconds) const;
    
};

