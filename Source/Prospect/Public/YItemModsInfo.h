#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "Engine/DataTable.h"
#include "YItemModsInfo.generated.h"

USTRUCT(BlueprintType)
struct FYItemModsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_weaponRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYModificationSlotType> m_availableModSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYModificationSlotType, FDataTableRowHandle> m_modInventoryItems;
    
    PROSPECT_API FYItemModsInfo();
};

