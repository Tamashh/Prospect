#pragma once
#include "CoreMinimal.h"
#include "YItemDataTableRowBase.h"
#include "YLoreItemRowBase.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYLoreItemRowBase : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_lore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_hudIconBig;
    
    PROSPECT_API FYLoreItemRowBase();
};

