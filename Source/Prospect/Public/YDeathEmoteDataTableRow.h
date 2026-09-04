#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YCharacterCustomizationRowBase.h"
#include "YDeathEmoteDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYDeathEmoteDataTableRow : public FYCharacterCustomizationRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_characterFoamColor;
    
    PROSPECT_API FYDeathEmoteDataTableRow();
};

