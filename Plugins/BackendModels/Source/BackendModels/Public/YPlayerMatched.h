#pragma once
#include "CoreMinimal.h"
#include "YPlayerMatched.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerMatched {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchTicketId;
    
    BACKENDMODELS_API FYPlayerMatched();
};

