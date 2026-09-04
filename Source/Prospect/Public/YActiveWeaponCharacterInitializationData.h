#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YStoredModData.h"
#include "YActiveWeaponCharacterInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveWeaponCharacterInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_customItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoredModData m_mods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_vanityEntries;
    
    PROSPECT_API FYActiveWeaponCharacterInitializationData();
};

