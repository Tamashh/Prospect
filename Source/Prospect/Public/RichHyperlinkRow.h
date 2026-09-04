#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "RichHyperlinkRow.generated.h"

USTRUCT(BlueprintType)
struct FRichHyperlinkRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHyperlinkStyle HyperlinkStyle;
    
    PROSPECT_API FRichHyperlinkRow();
};

