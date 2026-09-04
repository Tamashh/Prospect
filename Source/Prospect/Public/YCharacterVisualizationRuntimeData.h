#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "EYVanityType.h"
#include "YCharacterVisualizationRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterVisualizationRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationCategory m_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_vanityTypeToPreview;
    
    PROSPECT_API FYCharacterVisualizationRuntimeData();
};

