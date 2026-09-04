#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YOnboardingBlockedFeaturesDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYOnboardingBlockedFeaturesDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_featureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_headerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_bodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_relatedScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_sceneToShow;
    
    PROSPECT_API FYOnboardingBlockedFeaturesDataTableRow();
};

