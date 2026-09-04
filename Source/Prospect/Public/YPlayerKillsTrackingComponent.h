#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YKilledEventContext.h"
#include "YPlayerKilledEvent.h"
#include "YPlayerKillsTrackingComponent.generated.h"

class UYGameSquadsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerKillsTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameSquadsComponent* m_gameSquadsComponent;
    
public:
    UYPlayerKillsTrackingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTrySendKilledEvent(const FYKilledEventContext& Context, const FYPlayerKilledEvent& killedEvent);
    
};

