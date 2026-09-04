#pragma once
#include "CoreMinimal.h"
#include "YSquadMessage.generated.h"

USTRUCT(BlueprintType)
struct FYSquadMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString from;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Msg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    BACKENDMODELS_API FYSquadMessage();
};

