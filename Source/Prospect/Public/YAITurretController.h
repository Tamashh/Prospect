#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EYTurretState.h"
#include "OnAimTargetChangedSignatureDelegate.h"
#include "YAimTargetInfo.h"
#include "YAITurretController.generated.h"

class AActor;
class AYTurretPawn;
class UAISenseConfig_Sight;
class UBehaviorTree;

UCLASS(Blueprintable)
class AYAITurretController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canTargetHumanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canTargetOtherTurrets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAimTargetChangedSignature BP_OnAimTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_aimAtCharacterSocketName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_initialAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYTurretPawn* m_controlledTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_behaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISenseConfig_Sight* m_sightConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAimTargetInfo m_aimTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_seenEnemyActors;
    
public:
    AYAITurretController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAimTargetLocation(const FVector& aimTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetAimTarget(AActor* AimTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTurretStateChanged(EYTurretState newState);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSeenEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAimTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAimTarget();
    
};

