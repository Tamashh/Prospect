#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "YAdditiveMovementData.h"
#include "YCharacterAnimFirstPerson.h"
#include "YCharacterAnimThirdPerson.h"
#include "YLedgeClimbingData.h"
#include "YPlayerAimDirectionData.h"
#include "YPlayerEquippedWeaponData.h"
#include "YPlayerLeaningData.h"
#include "YPlayerMovementData.h"
#include "YPlayerTargetingData.h"
#include "YPlayerCharacterAnimCalculationComponent.generated.h"

class UAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerCharacterAnimCalculationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_relativeTargetingTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_inverseRelativeTargetingTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_adjustedTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_recoilForWeaponAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_weaponAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> m_characterAnimationAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerMovementData m_playerMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerAimDirectionData m_playerAimDirectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerTargetingData m_playerTargetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerEquippedWeaponData m_playerEquippedWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerLeaningData m_playerLeaningData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAdditiveMovementData m_additiveMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLedgeClimbingData m_ledgeClimbingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLedgeClimbingData m_prevLedgeClimbingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterAnimThirdPerson m_equippedWeaponThirdPersonAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterAnimFirstPerson m_equippedWeaponFirstPersonAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isTurningLeft;
    
    UYPlayerCharacterAnimCalculationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInterpDeltaYaw(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpDeltaPitch(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDoRotationReset(bool newState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnJumpedCallback(int32 jumpCount);
    
};

