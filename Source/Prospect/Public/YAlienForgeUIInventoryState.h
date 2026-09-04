#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YAlienForgeUIInventoryState.generated.h"

USTRUCT(BlueprintType)
struct FYAlienForgeUIInventoryState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_inputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_outputItems;
    
    PROSPECT_API FYAlienForgeUIInventoryState();
};

