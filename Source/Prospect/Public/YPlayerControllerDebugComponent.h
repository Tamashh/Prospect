#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YAzureFunctionResult.h"
#include "EYDebugEventType.h"
#include "EYDebugServerRetrievalType.h"
#include "OnDebugReceivedPlayfabUserDataDelegate.h"
#include "OnDebugSpawnBackgroundDropPodDelegate.h"
#include "YEventArray.h"
#include "YInventoryItem.h"
#include "YOnTriggerIdleKickDelegate.h"
#include "YSessionDebugInformation.h"
#include "YUpgradeDebugChange.h"
#include "YPlayerControllerDebugComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerControllerDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EYDebugEventType, FYEventArray> m_eventsPerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxDebugEntries;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugSpawnBackgroundDropPod OnSpawnBackgroundDropPod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugReceivedPlayfabUserData OnReceivedPlayfabUserData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTriggerIdleKick OnRequestIdleKick;
    
    UYPlayerControllerDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerYDebugUpdateWeapon(const FYInventoryItem& weapon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerYDebugExecuteUpgradeChange(FYUpgradeDebugChange upgradeChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerYDebugAddInventoryItems(const TArray<FDataTableRowHandle>& Items);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAdditionalPingToPlayer(float pingAddition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestDebugNetworkSettings();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetShardDebugState();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetInitializationDebugState(EYDebugServerRetrievalType State);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayfabUserData();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabUserReadOnlyDataReceived(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabUserDataReceived(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetControllerDebugEvent(UObject* WorldContextObject, EYDebugEventType EventType, int32 Index, FString& outEventString);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShardState(const TArray<FString>& Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendInitializationState(EYDebugServerRetrievalType State, const FString& Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGetDebugNetworkSettings(FYSessionDebugInformation networkInformation);
    
};

