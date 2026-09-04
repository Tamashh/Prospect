#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYActivityType.h"
#include "YActivityLinkedLocations.h"
#include "YActivityLocationArray.h"
#include "YFindActivityLocationsRequestData.h"
#include "YActivityLocationsManager.generated.h"

class AYActivityLocation;
class AYActivityLocationLinked;
class UObject;
class UYActivityLocationsManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYActivityLocationsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, FYActivityLocationArray> m_locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AYActivityLocationLinked*, FYActivityLinkedLocations> m_linkedLocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AYActivityLocation*, AYActivityLocationLinked*> m_locationToArea;
    
    UYActivityLocationsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActivitiesLoaded();
    
    UFUNCTION(BlueprintCallable)
    TArray<AYActivityLocation*> FindSpawnLocations(FYFindActivityLocationsRequestData Request);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UYActivityLocationsManager* FindActivityLocationsManager(UObject* WorldContextObject);
    
};

