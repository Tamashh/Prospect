#pragma once
#include "CoreMinimal.h"
#include "YLeaveSquad.generated.h"

USTRUCT(BlueprintType)
struct FYLeaveSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    BACKENDMODELS_API FYLeaveSquad();
};

