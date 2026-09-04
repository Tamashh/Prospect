#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYAccountLinkingResultCode.h"
#include "YPlatformAnalyticsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlatformAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlatformAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAccountLinkingResult(const FString& targetPlatformUserId, const FString& targetUserIdPlayFabMaster, const EYAccountLinkingResultCode resultCode);
    
};

