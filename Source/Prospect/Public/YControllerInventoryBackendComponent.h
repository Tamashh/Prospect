#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAzureFunctionResult.h"
#include "EYInventoryPlayerTypes.h"
#include "YBackendInventoryStateChangedSignatureDelegate.h"
#include "YEomInventoryData.h"
#include "YOnCompleteInventoryRequestCompletedSignatureDelegate.h"
#include "YOnEndOfMatchUpdatesSignatureDelegate.h"
#include "YOnInventoryInitializationCompletedSignatureDelegate.h"
#include "YControllerInventoryBackendComponent.generated.h"

class UYBackendInventoryModel;
class UYDefaultInventoryDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerInventoryBackendComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryInitializationCompletedSignature OnInventoryInitializationCompletedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnEndOfMatchUpdatesSignature OnEndOfMatchDataAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCompleteInventoryRequestCompletedSignature OnCompleteInventoryRequestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBackendInventoryStateChangedSignature OnBackendInventoryStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UYBackendInventoryModel* m_backendInventoryModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EndOfMatchUpdates, meta=(AllowPrivateAccess=true))
    FYEomInventoryData m_endOfMatchData;
    
    UYControllerInventoryBackendComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetEndOfMatchData(FYEomInventoryData& outData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SmokeCheckTrySendInventoryToBackend() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestTOCDataMigration(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EndOfMatchUpdates();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeInventoryFromDataAsset(UYDefaultInventoryDataAsset* DataAsset);
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeInventory();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInventoryInitialized();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnInventoryDataUpdated(TArray<EYInventoryPlayerTypes> changed);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnEndOfMatchDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnBackendInventoryChanged() const;
    
};

