#pragma once
#include "CoreMinimal.h"
#include "YActiveCustomizationData.h"
#include "YActiveGlobalRuntimeVanityData.h"
#include "YCharacterVisualizationRuntimeData.h"
#include "YInventoryItem.h"
#include "YCustomizationExplicitActorInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYCustomizationExplicitActorInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveCustomizationData m_customizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalRuntimeVanityData m_globalVanityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVisualizationRuntimeData m_visualizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_overrideWeaponHandle;
    
    PROSPECT_API FYCustomizationExplicitActorInitializationData();
};

