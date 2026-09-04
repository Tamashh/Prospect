#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YVOSpeakerRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYVOSpeakerRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description;
    
    PROSPECT_API FYVOSpeakerRow();
};

