#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YTestActorWithMarker.generated.h"

class UYMapMarkerComponent;

UCLASS(Blueprintable)
class AYTestActorWithMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMapMarkerComponent* m_markerComponent;
    
    AYTestActorWithMarker(const FObjectInitializer& ObjectInitializer);

};

