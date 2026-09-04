#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ActivityBar.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_ActivityBar : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* m_progressBar;
    
    UYWidget_ActivityBar();

    UFUNCTION(BlueprintCallable)
    void SetPercent(float percent);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpolationState(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void SetBarVisibility(bool newVisibility);
    
    UFUNCTION(BlueprintCallable)
    void InitializeInterpolation(float Duration, float startPercent, bool Activate);
    
};

