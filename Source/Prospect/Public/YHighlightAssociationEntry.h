#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "UObject/NoExportTypes.h"
#include "YInventoryItem.h"
#include "YHighlightAssociationEntry.generated.h"

USTRUCT(BlueprintType)
struct FYHighlightAssociationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_itemTypesToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_forceOnlyTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_sourceItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FGuid> m_highlightGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_associationGuid;
    
    PROSPECT_API FYHighlightAssociationEntry();
};

