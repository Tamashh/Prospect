#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YClaimableVictimCompensation.h"
#include "YControllerVictimCompensationRequestCompletedSignatureDelegate.h"
#include "YControllerVictimCompensationUpdatedSignatureDelegate.h"
#include "YInventoryItem.h"
#include "YControllerVictimCompensationComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerVictimCompensationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerVictimCompensationUpdatedSignature OnVictimCompensationPackagesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYControllerVictimCompensationRequestCompletedSignature OnClaimVictimCompensationPackageCompleted;
    
    UYControllerVictimCompensationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnRefreshVictimCompensationPackagesCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnFetchVictimCompensationPackagesCallback(const TArray<FYClaimableVictimCompensation>& compensationPackages);
    
    UFUNCTION(BlueprintCallable)
    void OnClaimVictimCompensationPackageCompletedCallback(bool success, const FString& Guid, const FYClaimableVictimCompensation& claimedPackage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClaimableCompensationPackages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYClaimableVictimCompensation GetOldestCompensationPackage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FYInventoryItem> GetItemsFromCompensationPackage(const UObject* WorldContextObject, const FYClaimableVictimCompensation& compensationPackage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYClaimableVictimCompensation> GetClaimableCompensationPackages() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClaimableCompensationPackageFromGuid(const FString& Guid, FYClaimableVictimCompensation& claimableVictimCompensation) const;
    
    UFUNCTION(BlueprintCallable)
    void FetchVictimCompensationPackages();
    
    UFUNCTION(BlueprintCallable)
    void ClaimOldestCompensationPackage();
    
    UFUNCTION(BlueprintCallable)
    void ClaimCompensationPackage(const FString& Guid);
    
};

