#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMatchScreenEndOfMatch.generated.h"

class UYWidget;

UCLASS(Blueprintable)
class UYMatchScreenEndOfMatch : public UYScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget> m_transitionWidgetClass;
    
public:
    UYMatchScreenEndOfMatch();

private:
    UFUNCTION(BlueprintCallable)
    void OpenEndOfMatchLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOfMatchLevelStreamed();
    
};

