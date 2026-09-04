#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YHighlightCallbackEventDelegate.h"
#include "YHighlightDelegateEventDelegate.h"
#include "YHighlightStateData.h"
#include "YHighlightStateReplicationData.h"
#include "YOnHighlightActivatedContextStateChangedDelegate.h"
#include "YOnHighlightContextInteractedDelegate.h"
#include "YWrapperCallbackHighlightData.h"
#include "YControllerHighlightComponent.generated.h"

class UObject;
class UYControllerHighlightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerHighlightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnHighlightActivatedContextStateChanged OnHighlightContextStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnHighlightContextInteracted OnHighlightContextInteracted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedStateDataChanged, meta=(AllowPrivateAccess=true))
    TArray<FYHighlightStateReplicationData> m_replicatedStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYWrapperCallbackHighlightData> m_callbackEvents;
    
public:
    UYControllerHighlightComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void UnregisterHighlightContextCallbackRowHandle(UObject* objCtx, const FDataTableRowHandle& rowHandle, FYHighlightCallbackEvent Delegate);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveHighlightGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHighlightData(FYHighlightStateReplicationData Data);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool RemoveHighlightWithGuid(UObject* objCtx, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveHighlightWithData(UObject* objCtx, const FYHighlightStateData& Data);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterHighlightContextCallbackRowHandle(UObject* objCtx, const FDataTableRowHandle& rowHandle, FYHighlightCallbackEvent Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedStateDataChanged(TArray<FYHighlightStateReplicationData> oldData);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool NotifyInteractionWithRowHandle(UObject* objCtx, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool NotifyInteractionWithGuid(UObject* objCtx, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    static bool NotifyInteractionWithData(UObject* objCtx, const FYHighlightStateData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContextRowHandleHighlighted(UObject* objCtx, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContextHighlighted(UObject* objCtx, const FYHighlightStateData& Data);
    
    UFUNCTION(BlueprintCallable)
    static FGuid HighlightContextWithRowHandleDelegateBlueprint(UObject* objCtx, FDataTableRowHandle rowHandle, FYHighlightDelegateEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    static FGuid HighlightContextWithRowHandle(UObject* objCtx, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static FGuid HighlightContextWithDataDelegateBlueprint(UObject* objCtx, const FYHighlightStateData& Data, FYHighlightDelegateEvent Delegate);
    
    UFUNCTION(BlueprintCallable)
    static FGuid HighlightContextWithData(UObject* objCtx, const FYHighlightStateData& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool FindHighlightDataFromGuidStatic(UObject* objCtx, FGuid relevantGuid, FYHighlightStateData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerHighlightComponent* FindControllerHighlightComponent(UObject* objCtx);
    
};

