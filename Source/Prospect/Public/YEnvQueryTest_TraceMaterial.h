#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Templates/SubclassOf.h"
#include "YEnvQueryTest_TraceMaterial.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UYEnvQueryTest_TraceMaterial : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FEnvTraceData TraceData;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> AllowedSurfaceTypes;
    
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TraceStartOffset;
    
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TraceEndOffset;
    
    UYEnvQueryTest_TraceMaterial();

};

