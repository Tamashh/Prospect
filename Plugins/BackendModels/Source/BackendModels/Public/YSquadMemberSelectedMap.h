#pragma once
#include "CoreMinimal.h"
#include "YSquadMemberSelectedMap.generated.h"

USTRUCT(BlueprintType)
struct FYSquadMemberSelectedMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString selectedMapName;
    
    BACKENDMODELS_API FYSquadMemberSelectedMap();
};

