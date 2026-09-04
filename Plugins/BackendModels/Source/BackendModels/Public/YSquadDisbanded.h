#pragma once
#include "CoreMinimal.h"
#include "YSquadDisbanded.generated.h"

USTRUCT(BlueprintType)
struct FYSquadDisbanded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    BACKENDMODELS_API FYSquadDisbanded();
};

