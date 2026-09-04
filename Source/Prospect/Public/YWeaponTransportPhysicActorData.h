#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YWeaponTransportPhysicActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PROSPECT_API FYWeaponTransportPhysicActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_actorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_initialActorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_initialActorOffset;
    
    FYWeaponTransportPhysicActorData();
};

