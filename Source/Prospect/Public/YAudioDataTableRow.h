#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YAudioDataTableRow.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FYAudioDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_prototypeSound;
    
    PROSPECT_API FYAudioDataTableRow();
};

