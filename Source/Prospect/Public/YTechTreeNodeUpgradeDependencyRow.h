#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "YTechTreeNodeUpgradeDependencyRow.generated.h"

USTRUCT(BlueprintType)
struct FYTechTreeNodeUpgradeDependencyRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_relatedDependencyRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_requiredLevel;
    
    PROSPECT_API FYTechTreeNodeUpgradeDependencyRow();
};

