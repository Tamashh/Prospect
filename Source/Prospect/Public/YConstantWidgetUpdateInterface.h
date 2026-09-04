#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YConstantWidgetUpdateInterface.generated.h"

class AActor;

UINTERFACE(MinimalAPI)
class UYConstantWidgetUpdateInterface : public UInterface {
    GENERATED_BODY()
};

class IYConstantWidgetUpdateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void Show() PURE_VIRTUAL(Show,);
    
    UFUNCTION()
    virtual bool ShouldWidgetBeKeptAlive() PURE_VIRTUAL(ShouldWidgetBeKeptAlive, return false;);
    
    UFUNCTION()
    virtual void OnRemoveWidget() PURE_VIRTUAL(OnRemoveWidget,);
    
    UFUNCTION()
    virtual void InitializeFor(AActor* Actor) PURE_VIRTUAL(InitializeFor,);
    
    UFUNCTION()
    virtual void Hide() PURE_VIRTUAL(Hide,);
    
    UFUNCTION()
    virtual void CalculateScore(float& outScore, bool& outForceShow) PURE_VIRTUAL(CalculateScore,);
    
};

