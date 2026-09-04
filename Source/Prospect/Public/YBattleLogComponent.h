#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EYPlayerMatchFinishedResult.h"
#include "OnEncounterDataReceivedDelegate.h"
#include "YDealtDamageData.h"
#include "YEncountersPerType.h"
#include "YPlayerEncounter.h"
#include "YBattleLogComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYBattleLogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYPlayerEncounter m_deathByAIEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerEncounter> m_allEncountersOrdered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterDataReceived BP_OnEncounterDataReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandleDistanceChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandleFinalizeEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FYEncountersPerType> m_encountersPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FName> m_userIdToNameMapping;
    
public:
    UYBattleLogComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetupEncountersOrdered();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllEncountersOrdered();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerFinishedMatch(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnParticipantUpdated(const FString& PlayerId, const bool IsTalking);
    
    UFUNCTION(BlueprintCallable)
    void OnDealDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void DistanceCheck();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetData(const TArray<FYPlayerEncounter>& allEncounters);
    
};

