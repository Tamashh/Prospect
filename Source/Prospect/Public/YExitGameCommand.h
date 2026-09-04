#pragma once
#include "CoreMinimal.h"
#include "YNavigationCommand.h"
#include "YExitGameCommand.generated.h"

UCLASS(Blueprintable, Config=Game)
class UYExitGameCommand : public UYNavigationCommand {
    GENERATED_BODY()
public:
    UYExitGameCommand();

    UFUNCTION(BlueprintCallable)
    void OnSurveyConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveGame();
    
private:
    UFUNCTION(BlueprintCallable)
    void CleanUp();
    
};

