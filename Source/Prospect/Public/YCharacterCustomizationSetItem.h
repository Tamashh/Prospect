#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCharacterCustomizationColorType.h"
#include "YCharacterCustomizationSetItem.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterCustomizationSetItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYCharacterCustomizationColorType> m_colorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    PROSPECT_API FYCharacterCustomizationSetItem();
};

