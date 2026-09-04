#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnInteractionEndedDelegate.h"
#include "OnInteractionStartedDelegate.h"
#include "YDealtDamageData.h"
#include "YInteractionUpdateData.h"
#include "YInventoryItem.h"
#include "YPlayerInteraction.h"
#include "YPlayerInteractionComponent.generated.h"

class AActor;
class APlayerController;
class AYCharacter;
class UAnimMontage;
class UYObjectInteractionComponent;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionUpdate, const FYInteractionUpdateData&, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOInInteractionDetected, const FYPlayerInteraction&, interactionData, bool, detected);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_cachedOwnerStateComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionUpdate OnInteractionUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOInInteractionDetected OnInteractionDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInteraction m_currentInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStarted BP_OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionEnded BP_OnInteractionEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_blockingAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_debugInfiniteInteractionPlayer;
    
    UYPlayerInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartInteraction();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInteractionInternal(UYObjectInteractionComponent* interactionComponent, FName inputAction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInteractionInterruptedInternal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnToggleQuickMenuVisibility(bool isQuickMenuVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleHudVisibility(bool isStationHudVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDBNOStateChanged(AActor* affectedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerGotDamaged(const FYDealtDamageData& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnObjectInteractionMessageUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateDeactivated(bool interrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInteractionComponentDisabled(UYObjectInteractionComponent* interactionComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AYCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void InterruptInteraction(const FString& Context, bool interruptFromInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionIsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractionActorLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInventoryItem GetLastPickedUpInventoryItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDuration() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInvalidateInteraction(const FString& callerContext);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInteractionSuccessful();
    
};

