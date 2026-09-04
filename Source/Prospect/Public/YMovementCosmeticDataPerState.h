#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YMovementCosmeticDataPerState.generated.h"

class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct FYMovementCosmeticDataPerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> m_cameraShakeStateActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> m_cameraShakeStateDeactivated;
    
    PROSPECT_API FYMovementCosmeticDataPerState();
};

