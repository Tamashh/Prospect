#pragma once
#include "CoreMinimal.h"
#include "YAbilityActionEntry.h"
#include "YWeaponDataTableBase.h"
#include "YAbilityDataTableRow.generated.h"

class UYWidget_ItemComponentStatsContainer;

USTRUCT(BlueprintType)
struct FYAbilityDataTableRow : public FYWeaponDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_abilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAbilityActionEntry m_abilityAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_overrideLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_ItemComponentStatsContainer> m_statsWidget;
    
    PROSPECT_API FYAbilityDataTableRow();
};

