#pragma once
#include "CoreMinimal.h"
#include "YDetailCamera.generated.h"

class AActor;
class UChildActorComponent;

USTRUCT(BlueprintType)
struct FYDetailCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* m_childActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_spawnedCameraActor;
    
    PROSPECT_API FYDetailCamera();
};

