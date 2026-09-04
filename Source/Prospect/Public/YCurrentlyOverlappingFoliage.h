#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Chaos/ChaosEngineInterface.h"
#include "YCurrentlyOverlappingFoliage.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FYCurrentlyOverlappingFoliage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> m_surface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> m_audioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_timeElapsed;
    
    PROSPECT_API FYCurrentlyOverlappingFoliage();
};

