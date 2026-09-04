#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YWorldMarkerTypeData.h"
#include "YWorldMarkerWidgetActor.generated.h"

class UYActorUIComponent;

UCLASS(Abstract, Blueprintable)
class PROSPECT_API AYWorldMarkerWidgetActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYActorUIComponent* m_actorUIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWorldMarkerTypeData m_markerTypeData;
    
public:
    AYWorldMarkerWidgetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitializeMarker(FYWorldMarkerTypeData markerTypeData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInit(FYWorldMarkerTypeData markerTypeData);
    
};

