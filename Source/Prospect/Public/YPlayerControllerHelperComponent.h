#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYActivityType.h"
#include "EYMapMarkerState.h"
#include "YPlayerControllerHelperComponent.generated.h"

class UYActorUIComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerControllerHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, UYActorUIComponent*> m_uiComponents;
    
public:
    UYPlayerControllerHelperComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEvacuation(EYMapMarkerState newStateForMarkers);
    
};

