#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YGameSessionSettings.generated.h"

USTRUCT(BlueprintType)
struct FYGameSessionSettings : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sessionLengthSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sessionUntilWarning;
    
    PROSPECT_API FYGameSessionSettings();
};

