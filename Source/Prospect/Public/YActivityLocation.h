#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EYActivityLocationStatus.h"
#include "EYActivityType.h"
#include "OnStatusChangedDelegate.h"
#include "YActivityLocation.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYActivityLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EYActivityLocationStatus m_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_respawnBlockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYActivityType> m_compatibleActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandleFreeLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusChanged BP_OnStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isGenericActivityLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnRadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_despawnMinTimeNoPlayerClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hiddenInEditor;
    
    AYActivityLocation(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void NotifyIsAvailable();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyActorDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDebugDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAdditionalDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYActivityType GetActivityType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DetermineRespawnBlockTime();
    
};

