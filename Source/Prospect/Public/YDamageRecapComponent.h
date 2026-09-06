#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCondensedDamageInfoReceivedDelegate.h"
#include "OnDamageDealtEventReceivedDelegate.h"
#include "OnDebugUncondensedDamageInfoReceivedDelegate.h"
#include "OnToggleDamageRecapVisibilityDelegateDelegate.h"
#include "YCondensedDamageData.h"
#include "YDamageEvent.h"
#include "YDealtDamageData.h"
#include "YRawDamageEventContainer.h"
#include "YDamageRecapComponent.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYDamageRecapComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showDamageRecap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* m_ownerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRawDamageEventContainer m_rawTakeDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRawDamageEventContainer m_rawDealDamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CondensedDamageInfo, meta=(AllowPrivateAccess=true))
    TArray<FYCondensedDamageData> m_condensedDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DebugUncondensedDamageInfo, meta=(AllowPrivateAccess=true))
    TArray<FYDamageEvent> m_debugUncondensedDamageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastDamageDealtEvent, meta=(AllowPrivateAccess=true))
    FYDamageEvent m_lastDamageDealtEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCondensedDamageInfoReceived BP_OnCondensedDamageInfoReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugUncondensedDamageInfoReceived BP_OnDebugUncondensedDamageInfoReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleDamageRecapVisibilityDelegate BP_OnToggleDamageRecapVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDealtEventReceived BP_OnDamageDealtEventReceived;
    
public:
    UYDamageRecapComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ShowDamageRecap();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetDealDamageInfo(bool isTakeDamageEvents);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestDebugUncondensedDamageInfo(bool isTakeDamageEvents);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestCondensedDamageInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastDamageDealtEvent() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DebugUncondensedDamageInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CondensedDamageInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSet(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveDBNO(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthDataChanged(float CurrentHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterDeath();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterDBNO();
    
    UFUNCTION(BlueprintCallable)
    void OnDealDamage(const FYDealtDamageData& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void LogCondensedEvents();
    
    UFUNCTION(BlueprintCallable)
    void HideDamageRecap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyAttackedHostilePlayer(float timeLimit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenAttackedRecentlyByHostilePlayer(float timeLimit) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYDamageEvent GetTotalDamageEventsFromActor(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYCondensedDamageData> GetCondensedDamageInfo();
    
};

