#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YHighlightDelegateEventDelegate.h"
#include "YInventoryItem.h"
#include "YHighlightStateData.generated.h"

USTRUCT(BlueprintType)
struct FYHighlightStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FYHighlightDelegateEvent m_delegate;
    
    PROSPECT_API FYHighlightStateData();
};

