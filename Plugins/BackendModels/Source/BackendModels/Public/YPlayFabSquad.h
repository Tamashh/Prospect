#pragma once
#include "CoreMinimal.h"
#include "YPlayFabSquadMember.h"
#include "YPlayFabSquad.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayFabSquadMember> Members;
    
    BACKENDMODELS_API FYPlayFabSquad();
};

