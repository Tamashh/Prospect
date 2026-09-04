#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YSettingEntryDescriptionDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYSettingEntryDescriptionDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_image;
    
    PROSPECT_API FYSettingEntryDescriptionDataTableRow();
};

