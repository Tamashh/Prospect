#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YPersistentActorInterface.generated.h"

class UYPersistentActorInfo;

UINTERFACE(Blueprintable, MinimalAPI)
class UYPersistentActorInterface : public UInterface {
    GENERATED_BODY()
};

class IYPersistentActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned(UYPersistentActorInfo* persistentProperties);

};
