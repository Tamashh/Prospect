#pragma once
#include "CoreMinimal.h"
#include "YPlayFabBaseSquadRequest.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabBaseSquadRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    BACKENDMODELS_API FYPlayFabBaseSquadRequest();
};

