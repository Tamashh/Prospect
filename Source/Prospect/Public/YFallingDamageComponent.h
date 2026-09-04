#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "YFallingDamageInfo.h"
#include "YLandedDelegateDelegate.h"
#include "YLandingDamageDelegateDelegate.h"
#include "YResetFallingDelegate.h"
#include "YFallingDamageComponent.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYFallingDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLandedDelegate BP_OnLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLandingDamageDelegate BP_OnLandingDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYResetFalling BP_OnResetFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFallingDamageInfo m_latestFallDamage;
    
    UYFallingDamageComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResetFallingDueTeleport();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpOffCallback(AActor* movementBaseActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFallingDistance() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnFallingDamage();
    
};

