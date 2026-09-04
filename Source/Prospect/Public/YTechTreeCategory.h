#pragma once
#include "CoreMinimal.h"
#include "EYTechTreeNodePerkType.h"
#include "EYTechtreeCategoryType.h"
#include "YDataTableRowBase.h"
#include "YTechTreeCategory.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYTechTreeCategory : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_categoryNodeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_categoryNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTechtreeCategoryType m_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountOfNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYTechTreeNodePerkType> m_perkTypeOrder;
    
    PROSPECT_API FYTechTreeCategory();
};

