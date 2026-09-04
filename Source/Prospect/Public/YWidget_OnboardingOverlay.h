#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_OnboardingOverlay.generated.h"

class UBackgroundBlur;
class UButton;
class UYDismissedOverlays;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OnboardingOverlay : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* m_backgroundBlur;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BITimeWhenShown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYDismissedOverlays* m_dismissedOverlays;
    
public:
    UYWidget_OnboardingOverlay();

private:
    UFUNCTION(BlueprintCallable)
    void OnCloseOverlay();
    
};

