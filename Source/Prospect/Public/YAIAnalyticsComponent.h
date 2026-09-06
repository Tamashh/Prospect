#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YAICompleteCombatInfo.h"
#include "YDealtDamageData.h"
#include "YPlayerDamagingAIsInfo.h"
#include "YAIAnalyticsComponent.generated.h"

class AActor;
class AYAICharacter;
class UYAIDataComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FYPlayerDamagingAIsInfo> m_playerDamagingAIsPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AYAICharacter*, FYAICompleteCombatInfo> m_aiCompleteCombatInfoPerAI;
    
public:
    UYAIAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatTargetChanged(UYAIDataComponent* Component, AActor* combatTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnAITakeDamage(const FYDealtDamageData& damageDealt);
    
    UFUNCTION(BlueprintCallable)
    void OnAIDealDamage(const FYDealtDamageData& damageDealt);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAICharacterSpawned(AYAICharacter* aiCharacter);
    
    UFUNCTION(BlueprintCallable)
    void DebugTestSendKilledAIEvents();

};

