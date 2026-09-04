#pragma once
#include "CoreMinimal.h"
#include "YItemDataTableRowBase.h"
#include "YCollectibleRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYCollectibleRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_hudIconBig;
    
    PROSPECT_API FYCollectibleRow();
};

