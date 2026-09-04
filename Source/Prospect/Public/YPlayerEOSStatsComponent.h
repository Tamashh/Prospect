#pragma once
#include "CoreMinimal.h"
#include "YSocialProfileEntry.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYMatchState.h"
#include "YFeatureToggles.h"
#include "YRawStatEntry.h"
#include "YUserRawStatsData.h"
#include "YPlayerEOSStatsComponent.generated.h"

class APlayerState;
class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerEOSStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatUpdatedForUserSignature, const FYUserRawStatsData&, statsData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatUpdatedForUserSignature OnStatUpdatedForUserEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInitialized;
    
    UYPlayerEOSStatsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RetryQueryStats(FYSocialProfileEntry socialProfileEntry);
    
public:
    UFUNCTION(BlueprintCallable)
    void QueryStatsForLocalPlayerState(const FString& Context);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSuccesfullyConnectedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnSocialProfilesUpdateCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnPreviousMatchHasEndedRequeryDelayCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChangedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStateChangedCallback(EYMatchState matchState);
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureToggleReceivedCallback(const FYFeatureToggles& featureToggles);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStatFromPlayerStateAndRowHandle(AYPlayerState* PlayerState, const FDataTableRowHandle& statRowHandle, const FString& Context, FYRawStatEntry& statEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStatFromPlayerState(APlayerState* PlayerState, FYRawStatEntry& statEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllStatsFromPlayerState(APlayerState* PlayerState, FYUserRawStatsData& statsData);
    
};

