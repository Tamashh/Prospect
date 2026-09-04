#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YAnalyticsFunctionLibrary.generated.h"

class AActor;
class AYPlayerCharacter;
class UObject;

UCLASS(Blueprintable)
class UYAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYAnalyticsFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendMeteorAnalyticsEvent(AActor* meteorActorContext, bool isLanded);
    
    UFUNCTION(BlueprintCallable)
    static void SendDistanceTravelledEvent(AYPlayerCharacter* Instigator, float distanceTravelled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendBigDrillFlyToEvent(const UObject* WorldContextObject, const FVector& currentLocation, const FVector& flyToLocation);
    
};

