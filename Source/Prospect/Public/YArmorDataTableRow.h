#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YGameplayAttributeModifier.h"
#include "YItemDataTableRowBase.h"
#include "YArmorDataTableRow.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FYArmorDataTableRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_armorAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_armoredHitZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_attributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* m_armorPhysicalMaterial;
    
    PROSPECT_API FYArmorDataTableRow();
};

