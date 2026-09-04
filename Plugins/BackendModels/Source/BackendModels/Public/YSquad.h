#pragma once
#include "CoreMinimal.h"
#include "YSquadMemberBE.h"
#include "YSquad.generated.h"

USTRUCT(BlueprintType)
struct FYSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSquadMemberBE> Members;
    
    BACKENDMODELS_API FYSquad();
};

