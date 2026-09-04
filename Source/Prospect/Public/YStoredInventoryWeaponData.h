#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YStoredModData.h"
#include "YStoredRuntimeWeaponInformation.h"
#include "YStoredInventoryWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FYStoredInventoryWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoredRuntimeWeaponInformation m_runtimeInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoredModData m_storedMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_vanityEntries;
    
    PROSPECT_API FYStoredInventoryWeaponData();
};

