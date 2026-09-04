#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YDealtDamageData.h"
#include "YWidget_HitIndicator.generated.h"

class UImage;
class UYDamageComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_HitIndicator : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_hitOverlayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_contextHitImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dotProductDoNotShowDamageIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* m_damagingComponent;
    
public:
    UYWidget_HitIndicator();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOwningPlayerTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void ClearHitIndicator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BP_OnPlayHitTargetFeedback(const FYDealtDamageData& damageData);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegates();
    
};

