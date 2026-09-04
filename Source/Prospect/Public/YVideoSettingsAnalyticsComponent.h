#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YVideoSettingsAnalyticsComponent.generated.h"

class UYUserSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYVideoSettingsAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYVideoSettingsAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendVideoSettingsAnalytics(UYUserSettings* userSettings);
    
};

