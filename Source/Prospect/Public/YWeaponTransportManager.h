#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YTransportRuntimeInitializationData.h"
#include "YWeaponTransportManager.generated.h"

class AYProjectile;

UCLASS(Blueprintable)
class UYWeaponTransportManager : public UObject {
    GENERATED_BODY()
public:
    UYWeaponTransportManager();

    UFUNCTION(BlueprintCallable)
    static int32 ExecuteTransport(UObject* objectContext, FYTransportRuntimeInitializationData initializatonData, AYProjectile* prespawnedProjectile);
    
};

