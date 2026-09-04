#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "OnMovementInputInitiatedDelegate.h"
#include "OnTeleportSuccessfullDelegate.h"
#include "YReplicatedLedgeClimbingData.h"
#include "YCharacter.generated.h"

class UMeshComponent;
class USkeletalMeshComponent;
class UYCharacterDeathComponent;
class UYDamageComponent;
class UYGameplayAttributesComponent;
class UYHealthComponent;
class UYPerkComponent;

UCLASS(Blueprintable)
class AYCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportSuccessfull BP_OnTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYHealthComponent* m_healthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* m_damageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterDeathComponent* m_deathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gameplayAttributesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPerkComponent* m_perkComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementInputInitiated OnMovementInputInitiated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsProning, meta=(AllowPrivateAccess=true))
    uint8 bIsProning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LedgeClimbingData, meta=(AllowPrivateAccess=true))
    FYReplicatedLedgeClimbingData m_ledgeClimbingData;
    
    AYCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnProne(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimRootMotionTranslationScale(float NewScale);
    
    UFUNCTION(BlueprintCallable)
    void Prone(bool bClientSimulation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LedgeClimbingData(const FYReplicatedLedgeClimbingData& prevData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsProning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayDatatableSound(FDataTableRowHandle audioEventDataTableRow, bool onlyPlayOnSimulatedProxy);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float InputValue);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float InputValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPerkComponent* GetPerkComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYGameplayAttributesComponent* GetGameplayAttributesComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYDamageComponent* GetDamageComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffsets() const;
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* FindRelevantCharacterMesh(bool forceThirdPersonMesh);
    
    UFUNCTION(BlueprintCallable)
    void FindAllRelevantMeshes(TArray<UMeshComponent*>& OutComponents);
    
};

