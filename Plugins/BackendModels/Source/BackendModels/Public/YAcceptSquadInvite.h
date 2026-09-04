#pragma once
#include "CoreMinimal.h"
#include "YAcceptSquadInvite.generated.h"

USTRUCT(BlueprintType)
struct FYAcceptSquadInvite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    BACKENDMODELS_API FYAcceptSquadInvite();
};

