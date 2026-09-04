#pragma once
#include "CoreMinimal.h"
#include "YItemDataTableRowBase.h"
#include "YQuestItemRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYQuestItemRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_hudIconBig;
    
    PROSPECT_API FYQuestItemRow();
};

