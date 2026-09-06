#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/DataTable.h"
#include "EYStateChangeType.h"
#include "EYPlayerStateBlueprint.h"
#include "OnClientMovementCorrectionOccuredDelegate.h"
#include "OnJumpOffDelegate.h"
#include "OnMovementImpactDelegate.h"
#include "OnMovementModeChangedDataDelegate.h"
#include "OnSpeedHackDetectedDelegate.h"
#include "OnTeleportDetectedDelegate.h"
#include "OnTimeDescrepancyDetectedDelegate.h"
#include "YDealtDamageData.h"
#include "YMovementStateData.h"
#include "YPlayerMovementComponent.generated.h"

class AYVehicle;
class UYEncumbranceEffects_DataAsset;
class UYGameplayAttributesComponent;
class UYLeaningComponent;
class UYLedgeClimbingComponent;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantsToProne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PronedHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeedProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isJumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disregardStateChanges;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocityInAirJump;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpXYMaxInAirJump;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpToADSDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_fastMovementDebug;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementImpact OnMovementImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementModeChangedData OnMovementModeChangeData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpOff OnJumpOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientMovementCorrectionOccured OnClientMovementCorrectionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeDescrepancyDetected OnTimeDescrepancyDetectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpeedHackDetected OnSpeedHackDetectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportDetected OnTeleportDetectedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMovementStateData m_slideData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMovementStateData m_vehicleBoostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYLedgeClimbingComponent* m_ledgeClimbingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYLeaningComponent* m_leaningComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_ownerStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_ownerGameplayAttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYEncumbranceEffects_DataAsset* m_encumbranceEffectDataAsset;
    
public:
    UYPlayerMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCheatTeleportDetection();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleDataChanged(FDataTableRowHandle newRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleChanged(AYVehicle* newVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnProneStateFinished(bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnProneStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroFinishedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnCrouchStateFinished(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnCrouchStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnBoostStateChanged(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyStatesDeactivated(const TArray<EYPlayerStateBlueprint>& states);

    UFUNCTION(BlueprintCallable)
    void OnAnyStateChanged(EYStateChangeType stateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyStateActivated(EYPlayerStateBlueprint State);

public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
};

