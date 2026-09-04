#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAutomationLoadingMetrics.h"
#include "YAutomationManager.generated.h"

UCLASS(Blueprintable)
class UYAutomationManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAutomationLoadingMetrics m_automationMetrics;
    
    UYAutomationManager();

    UFUNCTION(BlueprintCallable)
    void FinishedLoadingMap();
    
};

