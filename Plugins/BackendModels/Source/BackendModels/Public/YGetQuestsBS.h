#pragma once
#include "CoreMinimal.h"
#include "YGetQuestsBS.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetQuestsBS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYGetQuestsBS();
};

