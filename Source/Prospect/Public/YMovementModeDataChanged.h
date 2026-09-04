#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "YMovementModeDataChanged.generated.h"

USTRUCT(BlueprintType)
struct FYMovementModeDataChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_newMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_oldMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeSinceMovementModeChanged;
    
    PROSPECT_API FYMovementModeDataChanged();
};

