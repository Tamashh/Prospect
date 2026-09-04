#pragma once
#include "CoreMinimal.h"
#include "YWeaponMaterialEntry.h"
#include "YWeaponMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeaponMaterialEntry> m_materialEntries;
    
    PROSPECT_API FYWeaponMaterialData();
};

