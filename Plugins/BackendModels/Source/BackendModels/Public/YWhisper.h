#pragma once
#include "CoreMinimal.h"
#include "YWhisper.generated.h"

USTRUCT(BlueprintType)
struct FYWhisper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString from;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString to;
    
    BACKENDMODELS_API FYWhisper();
};

