#pragma once
#include "CoreMinimal.h"
#include "YNavigationCommand.h"
#include "YReturnToStationCommand.generated.h"

UCLASS(Blueprintable)
class UYReturnToStationCommand : public UYNavigationCommand {
    GENERATED_BODY()
public:
    UYReturnToStationCommand();

    UFUNCTION(BlueprintCallable)
    void OnLeaveMatchRejected();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveMatchConfirmed();
    
};

