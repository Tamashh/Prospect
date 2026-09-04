#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "YAttributeModiferRolledValueOverride.h"
#include "YPerk.h"
#include "YRolledPerkRow.generated.h"

USTRUCT(BlueprintType)
struct FYRolledPerkRow : public FYPerk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAttributeModiferRolledValueOverride m_attributeModiferRolledValueOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_itemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_materialsHostingThisPerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_shortRolledPerkId;
    
    PROSPECT_API FYRolledPerkRow();
};

