#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YCharacterRotationUpdateRequestData.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterRotationUpdateRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_rotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_resetRotation;
    
    PROSPECT_API FYCharacterRotationUpdateRequestData();
};

