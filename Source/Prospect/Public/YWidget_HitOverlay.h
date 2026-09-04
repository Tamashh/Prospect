#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YDealtDamageData.h"
#include "YWidget_HitOverlay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_HitOverlay : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_HitOverlay();

protected:
    UFUNCTION(BlueprintCallable)
    void TakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayHitTargetFeedback(const FYDealtDamageData& damageData);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegates();
    
};

