#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YUpgradeDebugChange.generated.h"

USTRUCT(BlueprintType)
struct FYUpgradeDebugChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_desiredItem;
    
    PROSPECT_API FYUpgradeDebugChange();
};

