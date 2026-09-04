#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YIngredientAndAmount.h"
#include "YWeightedReward.h"
#include "YAlienForgeIronIngotRecipeRow.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYAlienForgeIronIngotRecipeRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYIngredientAndAmount> m_requiredMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountOfRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeightedReward> m_possibleRewardsAndWeights;
    
    FYAlienForgeIronIngotRecipeRow();
};

