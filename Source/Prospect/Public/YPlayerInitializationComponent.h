#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYCachedSpawnLocationType.h"
#include "YPlayerSpawnLocationInfo.h"
#include "YPlayerInitializationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerInitializationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsServerInitialized, meta=(AllowPrivateAccess=true))
    bool m_isServerInitialized;
    
    UYPlayerInitializationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayerLocationAndStartLevelStreaming();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestDebugStatusUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnLocationSet(FYPlayerSpawnLocationInfo Data, EYCachedSpawnLocationType Type, const FString& contextStr);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsServerInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInventoryInitializationCompleted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGlobalVanityAssetsLoaded(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnCallbackMeshInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyClientAboutServerFinishedInitialization();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnStatusUpdateFromServer(const TArray<FString>& infos);
    
};

