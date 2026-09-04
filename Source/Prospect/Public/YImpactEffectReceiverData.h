#pragma once
#include "CoreMinimal.h"
#include "YFXCategoryMaterialFloatParemeterEntry.h"
#include "YFXCategoryMaterialParemeterEntry.h"
#include "YImpactEffectReceiverData.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYImpactEffectReceiverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFXCategoryMaterialParemeterEntry> m_fxVectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFXCategoryMaterialFloatParemeterEntry> m_fxFloatParameters;
    
    FYImpactEffectReceiverData();
};

