#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "YDataTableRowBase.h"
#include "YWeaponImpactEffectsAssociation.h"
#include "YImpactEffectsRow.generated.h"

USTRUCT(BlueprintType)
struct FYImpactEffectsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableFallbackToGenericRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alwaysUseDefaultSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FYWeaponImpactEffectsAssociation> m_effects;
    
    PROSPECT_API FYImpactEffectsRow();
};

