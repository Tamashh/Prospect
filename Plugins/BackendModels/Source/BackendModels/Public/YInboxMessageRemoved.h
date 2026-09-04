#pragma once
#include "CoreMinimal.h"
#include "YInboxMessageRemoved.generated.h"

USTRUCT(BlueprintType)
struct FYInboxMessageRemoved {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    BACKENDMODELS_API FYInboxMessageRemoved();
};

