#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnEmoteInterruptedDelegate.h"
#include "OnEmotedDelegate.h"
#include "YSelectedEmote.h"
#include "YCharacterEmoteComponent.generated.h"

class UYCommWheelVOComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterEmoteComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmoted BP_OnEmoted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmoteInterrupted BP_OnEmoteInterrupted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedEmoteChanged, meta=(AllowPrivateAccess=true))
    FYSelectedEmote m_selectedEmote;
    
    UYCharacterEmoteComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryEmoteStateAndPlayEmoteAnimation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSelectedEmote(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectedNewEmote(int32 itemSlotID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTransitionFirstPersonState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedEmoteChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveEmoteState();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementInputProcessed();
    
    UFUNCTION(BlueprintCallable)
    void OnEmoteStateDeactivated(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnCommWheelUsed(UYCommWheelVOComponent* commWheelComponent, FDataTableRowHandle commWheelEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedEmoteState();
    
};

