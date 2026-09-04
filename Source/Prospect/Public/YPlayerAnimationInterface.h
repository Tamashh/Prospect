#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EYWeaponPlayState.h"
#include "YDealtDamageData.h"
#include "YPlayerAnimationInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UYPlayerAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class IYPlayerAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetDeathAnimationToPlay(const FYDealtDamageData& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsFirstPerson(bool firstPersonState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayWeaponState(EYWeaponPlayState State);
    
};

