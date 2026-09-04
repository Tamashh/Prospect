#pragma once
#include "CoreMinimal.h"
#include "EYUserState.h"
#include "YSquadMemberBE.generated.h"

USTRUCT(BlueprintType)
struct FYSquadMemberBE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserState State;
    
    BACKENDMODELS_API FYSquadMemberBE();
};

