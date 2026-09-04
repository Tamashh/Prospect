#pragma once
#include "CoreMinimal.h"
#include "EYPlayerMatchState.h"
#include "YWidget_ActorPlate.h"
#include "YWidget_PlayerCharacterPlate.generated.h"

class AActor;
class APawn;
class AYPlayerCharacter;
class AYPlayerState;
class UTextBlock;
class UYHealthComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_PlayerCharacterPlate : public UYWidget_ActorPlate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_associatedPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_playerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_levelText;
    
public:
    UYWidget_PlayerCharacterPlate();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTeamComponentAndDBNOShieldStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnUserInfoUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnSquadsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthEmpty(UYHealthComponent* healthComponent, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDBNOStateDeactivated(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnDBNOStateActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnAssociatedPlayerStateSet(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUserInfoUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInviteStatusChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHighlightStateChanged(bool newState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDBNOTeleportAvailable(bool isDBNOTeleportAvailable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDBNOStatusChanged(bool isInDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAssociatedPlayerState(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void BindToLocalPlayerCharacterDeath(APawn* oldPawn, APawn* newPawn);
    
};

