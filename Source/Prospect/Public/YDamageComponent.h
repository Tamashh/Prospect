#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EYDamageComponentType.h"
#include "IgnoreActorDamageArrayUpdatedDelegate.h"
#include "YDOTDamageEntry.h"
#include "YDealDamageEventDelegate.h"
#include "YDealtDamageData.h"
#include "YDotDamageStateChangedDelegate.h"
#include "YHitflashData.h"
#include "YTakeDamageEventDelegate.h"
#include "YDamageComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActorToIgnoreDamage, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_actorsToIgnoreDamage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBeAggroedByAI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTakeDamageEvent BP_PreOnTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTakeDamageEvent OnTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTakeDamageEvent OnTakeDamagePost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_damageInfoCauserRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDamageComponentType m_damageComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYHitflashData m_hitflashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDOTDamageEntry m_dotEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYDealtDamageData m_lastDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYDealtDamageData m_lastDealtDamageData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDotDamageStateChanged OnDotStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDealDamageEvent OnDealDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIgnoreActorDamageArrayUpdated OnDamageArrayUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hitFlashDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeTakeDamageLocallyControlledActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeDealtDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeDealtPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_lastTimeAIMeleeAttackPerformed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_canBeDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_godmodeActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBeDamagedByPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBeDamagedByAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_canBeDamagedByTurrets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_canOnlyBeDamageByFilteredTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> m_damageFilterObjectTypeMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_relevantForKillFeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_relevantPerkOnKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_produceHitFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBeHealedRegardlessOfTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canHealRegardlessOfTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canEverBeHealed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DotActive, meta=(AllowPrivateAccess=true))
    bool m_isDotActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hitFlashActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alwaysShowDamageNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> m_damageAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_weakSpotComponentIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_weakSpotComponentDefaultDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_weakSpotHitZones;
    
    UYDamageComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateDamageAreas(TMap<FName, float> newDamageAreas);
    
    UFUNCTION(BlueprintCallable)
    void SetHitflashComponents(TArray<UMeshComponent*> MeshComponents);
    
    UFUNCTION(BlueprintCallable)
    void ResetDamageAreas();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActorToIgnoreDamage(AActor* actorToIgnore, AActor* ownerWithComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DotActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActorToIgnoreDamage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastTookDamage(FYDealtDamageData Data);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDealDamage(FYDealtDamageData Data);
    
public:
    UFUNCTION(BlueprintCallable)
    static void AddActorToIgnoreDamage(AActor* actorToIgnore, AActor* ownerWithComponent);
    
};

