#pragma once
#include "CoreMinimal.h"
#include "YItemDataTableRowBase.h"
#include "YProspectorBadgeRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYProspectorBadgeRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_hudIconBig;
    
    PROSPECT_API FYProspectorBadgeRow();
};

