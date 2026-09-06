#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YOnAllRewardsWidgetsClosedDelegate.h"
#include "YControllerRewardsUIComponent.generated.h"

class UObject;
class UYControllerRewardsUIComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerRewardsUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnAllRewardsWidgetsClosed OnAllRewardsWidgetsClosed;

    UYControllerRewardsUIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerRewardsUIComponent* FindControllerRewardsUIComponent(UObject* contextObject);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BP_IsAnyRewardsWidgetActive() const;

};
