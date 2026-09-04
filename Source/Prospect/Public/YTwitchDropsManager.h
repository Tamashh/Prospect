#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOnTwitchDropCustomItemsUpdatedSignatureDelegate.h"
#include "YOnTwitchDropItemsClaimCompletedSignatureDelegate.h"
#include "YOnTwitchDropPackagesClaimCompletedSignatureDelegate.h"
#include "YOnTwitchDropPackagesReceivedSignatureDelegate.h"
#include "YTwitchDropPackage.h"
#include "YTwitchDropsManager.generated.h"

class UYTwitchDropsManager;

UCLASS(Blueprintable)
class PROSPECT_API UYTwitchDropsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTwitchDropPackagesReceivedSignature OnTwitchDropPackagesReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTwitchDropPackagesClaimCompletedSignature OnTwitchDropPackagesClaimCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTwitchDropItemsClaimCompletedSignature OnTwitchDropItemsClaimCompletedSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTwitchDropCustomItemsUpdatedSignature OnTwitchDropCustomItemsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTwitchDropPackage> m_twitchDropsPackages;
    
public:
    UYTwitchDropsManager();

    UFUNCTION(BlueprintCallable)
    void RequestTwitchDropItemRewards(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYTwitchDropsManager* GetTwitchDropsManager(const UObject* WorldContext, const FString& ctxStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYTwitchDropPackage> GetTwitchDropPackages();
    
    UFUNCTION(BlueprintCallable)
    void ClaimTwitchDropPackage(const FString& PackageId);
    
    UFUNCTION(BlueprintCallable)
    void ClaimOldestTwitchDropPackage();
    
};

