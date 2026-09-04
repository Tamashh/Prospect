#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YDamageInfoRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYDamageInfoRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_icon;
    
    PROSPECT_API FYDamageInfoRow();
};

