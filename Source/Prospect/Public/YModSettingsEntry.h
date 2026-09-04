#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YModSettingsEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYModSettingsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_noDataTableRowHandle;
    
    PROSPECT_API FYModSettingsEntry();
};

