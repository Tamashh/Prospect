#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YAIMontagePlayInfo.h"
#include "YDealtDamageData.h"
#include "YAIAnimationInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UYAIAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class IYAIAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TriggerFlinchAnimation(const FYDealtDamageData& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationMontage(FYAIMontagePlayInfo montageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FYAIMontagePlayInfo GetTurnAnimationToPlay(float desiredTurnAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetSpawnAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetScanAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetReloadAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetOutOfRestAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetGoToRestAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetExplosionAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetDeathAnimationToPlay(const FYDealtDamageData& deathHitInfo);
    
};

