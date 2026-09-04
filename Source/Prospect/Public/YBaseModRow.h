#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "YItemDataTableRowBase.h"
#include "YBaseModRow.generated.h"

USTRUCT(BlueprintType)
struct FYBaseModRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYModificationSlotType m_modType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_modCompatibilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_perkRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_shortModId;
    
    PROSPECT_API FYBaseModRow();
};

