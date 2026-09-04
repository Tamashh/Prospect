#pragma once
#include "CoreMinimal.h"
#include "YGrant.h"
#include "YWidgetController.h"
#include "YWidgetController_ItemContainerSeasonReward.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_ItemContainerSeasonReward : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_ItemContainerSeasonReward();

    UFUNCTION(BlueprintCallable)
    void SetupFromSeasonLevelAndGrantRow(FName seasonRowId, int32 belongingSeasonLevel, FName grantRowId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGrantsUpdated(const TArray<FYGrant>& grants);
    
};

