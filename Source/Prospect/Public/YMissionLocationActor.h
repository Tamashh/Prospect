#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YMissionLocationActor.generated.h"

UCLASS(Blueprintable)
class AYMissionLocationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAvailable;
    
    AYMissionLocationActor(const FObjectInitializer& ObjectInitializer);

};

