#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "YDataTableRowBase.h"
#include "YModSettingsEntry.h"
#include "YModSettingsDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYModSettingsDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYModificationSlotType, FYModSettingsEntry> m_modSettings;
    
    PROSPECT_API FYModSettingsDataTableRow();
};

