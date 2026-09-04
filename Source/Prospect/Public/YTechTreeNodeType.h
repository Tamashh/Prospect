#pragma once
#include "CoreMinimal.h"
#include "EYTechTreeNodePerkType.h"
#include "EYTechtreeCategoryType.h"
#include "YDataTableRowBase.h"
#include "YTechTreeNodeUpgradeDependencyRow.h"
#include "YTechTreeNodeUpgradeLevelRow.h"
#include "YTechTreeNodeType.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYTechTreeNodeType : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_perkName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_perkDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_nodeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_nodeBonusDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_nodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYTechtreeCategoryType> m_categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_playerQuarterLevelRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTechTreeNodePerkType m_nodePerkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTechTreeNodeUpgradeLevelRow> m_perkLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTechTreeNodeUpgradeDependencyRow> m_upgradeDependencies;
    
    PROSPECT_API FYTechTreeNodeType();
};

