#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYFaction.h"
#include "YUnlockedShopItem.h"
#include "YPlayerFactionLevelUpData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerFactionLevelUpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYUnlockedShopItem> unlockedShopItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> unlockedContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFaction factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewLevel;
    
    PROSPECT_API FYPlayerFactionLevelUpData();
};

