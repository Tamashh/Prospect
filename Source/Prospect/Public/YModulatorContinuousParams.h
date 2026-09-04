#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNodeModulatorContinuous.h"
#include "Curves/CurveFloat.h"
#include "YModulatorContinuousParams.generated.h"

USTRUCT(BlueprintType)
struct FYModulatorContinuousParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_enableDebugLogging;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FModulatorContinuousParams m_parameter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_optionalParameterValueTransformCurve;
    
    PROSPECT_API FYModulatorContinuousParams();
};

