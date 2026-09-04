#pragma once
#include "CoreMinimal.h"
#include "YPlayerQuarterStatus.h"
#include "YTechTreeNodeStatus.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYTechtreeCategoryType.h"
#include "IsInPlayerQuartersChangedDelegate.h"
#include "YControllerPlayerQuarterUpdatedSignatureDelegate.h"
#include "YOnPQBackendAnswerReceivedSignatureDelegate.h"
#include "YOnPQUpgradeTimerReachedZeroSignatureDelegate.h"
#include "YPlayerQuarterLevelUpSignatureDelegate.h"
#include "YPlayerQuarterPurchaseFailedDelegate.h"
#include "YPlayerQuarterTechTreeCategoryOpenDelegate.h"
#include "YPlayerQuarterTechTreeNodeSelectedDelegate.h"
#include "YControllerPlayerQuarterComponent.generated.h"

class UObject;
class UYControllerPlayerQuarterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerPlayerQuarterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerPlayerQuarterUpdatedSignature OnPlayerQuartersLevelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerPlayerQuarterUpdatedSignature OnPlayerTechtreeNodesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerQuarterPurchaseFailed PlayerQuarterPurchaseFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerQuarterLevelUpSignature OnPlayerQuarterLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnPQUpgradeTimerReachedZeroSignature OnPQUpgradeTimerReachedZero;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnPQBackendAnswerReceivedSignature OnPQBackendAnswerReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerQuarterTechTreeCategoryOpen OnTechTreeCategoryOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerQuarterTechTreeNodeSelected OnTechTreeNodeSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIsInPlayerQuartersChanged OnIsInPlayerQuartersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_playerLeveledUp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInPlayerQuarters, meta=(AllowPrivateAccess=true))
    bool m_bIsInPlayerQuarters;
    
public:
    UYControllerPlayerQuarterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UnlockUpgradeRequestsAndBroadcast();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsInPlayerQuarters(bool NewIsInPlayerQuarters);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpgradeCompletedTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnTechTreeNodesAvailable(const FString& UserId, const TArray<FYTechTreeNodeStatus>& techTreeNodes, const int32& remainingTimeInSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInPlayerQuarters();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerQuarterUpgradeCompletedTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerQuartersLevelAvailable(const FYPlayerQuarterStatus& playerQuarterStatus, const int32& remainingTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerQuarterPurchaseFailed(const FString& Error);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void NotifyTechTreeNodeSelect(const FDataTableRowHandle& rowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void NotifyTechTreeCategoryOpen(EYTechtreeCategoryType Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPlayerQuarters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerPlayerQuarterComponent* FindControllerPlayerQuarterComponent(UObject* objCtx);
    
};

