#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYActivityType.h"
#include "Templates/SubclassOf.h"
#include "YDebugActivityLocationSimple.h"
#include "YActivityDebugMapMarkerManager.generated.h"

class AActor;
class UYDebugActivityLocationMapMarkerData;
class UYMapMarkerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYActivityDebugMapMarkerManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYDebugActivityLocationMapMarkerData> m_mapMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYActivityType> m_simpleActivityTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYMapMarkerData*> m_data;
    
    UYActivityDebugMapMarkerManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowSimpleDebug(const TArray<FYDebugActivityLocationSimple>& lootPointsInfo, EYActivityType Type);
    
    UFUNCTION(BlueprintCallable)
    void AddGenericDebugMapMarkerForActors(TArray<AActor*> actors, TSubclassOf<UYMapMarkerData> markerDataClass);

};

