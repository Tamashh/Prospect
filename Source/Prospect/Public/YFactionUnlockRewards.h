#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YUnlockedShopItem.h"
#include "YFactionUnlockRewards.generated.h"

USTRUCT(BlueprintType)
struct FYFactionUnlockRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYUnlockedShopItem> m_unlockedShopItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_unlockedContracts;
    
    PROSPECT_API FYFactionUnlockRewards();
};

