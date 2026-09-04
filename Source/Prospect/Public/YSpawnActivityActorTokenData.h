#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "Templates/SubclassOf.h"
#include "YSpawnActivityActorTokenData.generated.h"

class AActor;
class AYActivityActorManager;
class AYActivityLocation;
class UYActivityRegisterComponent;

USTRUCT(BlueprintType)
struct FYSpawnActivityActorTokenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYActivityLocation* m_activityLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYActivityActorManager* m_activityActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_actorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYActivityRegisterComponent* m_registerComponentOverride;
    
    PROSPECT_API FYSpawnActivityActorTokenData();
};

