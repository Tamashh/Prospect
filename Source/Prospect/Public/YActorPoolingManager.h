#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YPooledActorEntry.h"
#include "YActorPoolingManager.generated.h"

UCLASS(Blueprintable)
class UYActorPoolingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPooledActorEntry> m_pooledActors;
    
public:
    UYActorPoolingManager();

};

