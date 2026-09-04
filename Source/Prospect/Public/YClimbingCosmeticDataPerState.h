#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YClimbingCosmeticDataPerState.generated.h"

class UMatineeCameraShake;

USTRUCT(BlueprintType)
struct FYClimbingCosmeticDataPerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> m_cameraShakeStateStarted;
    
    PROSPECT_API FYClimbingCosmeticDataPerState();
};

