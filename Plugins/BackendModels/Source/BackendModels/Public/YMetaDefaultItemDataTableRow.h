#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "EYDefaultItemSlot.h"
#include "YMetaDefaultItemDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYMetaDefaultItemDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDefaultItemSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle default_vanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle default_secondary_vanity;
    
    BACKENDMODELS_API FYMetaDefaultItemDataTableRow();
};

