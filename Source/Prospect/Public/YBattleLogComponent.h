#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EYPlayerMatchFinishedResult.h"
#include "EYEnemyType.h"
#include "OnEncounterDataReceivedDelegate.h"
#include "YDealtDamageData.h"
#include "YEncounter.h"
#include "YEncountersPerType.h"
#include "YBattleLogComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYBattleLogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYEnemyType> m_enemiesToStoreDamageTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYEncounter m_deathByAIEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYEncounter> m_allEncountersOrdered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandleDistanceChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandleFinalizeEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FYEncountersPerType> m_encountersPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FName> m_userIdToUserNameMapping;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterDataReceived BP_OnEncounterDataReceived;

    UYBattleLogComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerFinishedMatch(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnParticipantUpdated(const FString& PlayerId, const bool IsTalking);
    
    UFUNCTION(BlueprintCallable)
    void OnDealDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeEncounters();

    UFUNCTION(BlueprintCallable)
    void DistanceCheck();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetData(const TArray<FYEncounter>& allEncounters);
    
};

