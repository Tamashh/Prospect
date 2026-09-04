#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YFallingDamageInfo.h"
#include "YLandingDelegateDelegate.h"
#include "YCharacterLandingComponent.generated.h"

class UCurveVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterLandingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_moveSpeedModifier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_currentActviveMoveAndLookSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timestampCurveSet;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLandingDelegate BP_OnLanding;
    
    UYCharacterLandingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEvaluateLanding(const FYFallingDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelledHardLanding(bool interrupt);
    
    UFUNCTION(BlueprintCallable)
    void FinishHardLanding();
    
};

