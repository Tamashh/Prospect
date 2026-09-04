#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YSpawnableInterface.generated.h"

class UYPersistentData;

UINTERFACE(Blueprintable, MinimalAPI)
class UYSpawnableInterface : public UInterface {
    GENERATED_BODY()
};

class IYSpawnableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned(UYPersistentData* persistentProperties);
    
};

