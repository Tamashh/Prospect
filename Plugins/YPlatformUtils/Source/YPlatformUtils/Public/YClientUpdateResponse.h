#pragma once
#include "CoreMinimal.h"
#include "YClientUpdateResponse.generated.h"

USTRUCT(BlueprintType)
struct FYClientUpdateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isClientUpToDate;
    
    YPLATFORMUTILS_API FYClientUpdateResponse();
};

