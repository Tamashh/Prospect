#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YWeaponInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_inventoryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_activeWeaponInstance;
    
    PROSPECT_API FYWeaponInitializationData();
};

