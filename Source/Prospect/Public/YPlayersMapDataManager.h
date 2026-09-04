#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EYMapMarkerState.h"
#include "YPlayersMapDataManager.generated.h"

class UYControllerPlayerMapMarkerComponent;
class UYMapMarkerData;

UCLASS(Blueprintable)
class AYPlayersMapDataManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayersMapDataManagerCreated);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYControllerPlayerMapMarkerComponent*> m_controllerMarkerComponentsQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYMapMarkerData*> m_replicatedMarkersData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYMapMarkerData*> m_clientMarkersData;
    
    AYPlayersMapDataManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMarkersEvacuatioState(EYMapMarkerState newStateForMarkers);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDebugMarkerForActorInRange(UYMapMarkerData* marker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClientRelevantMapMarkersCount() const;
    
};

