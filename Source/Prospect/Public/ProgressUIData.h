#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProgressUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FProgressUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_progressColorTheme;
    
    PROSPECT_API FProgressUIData();
};

