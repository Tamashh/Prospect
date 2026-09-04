#pragma once
#include "CoreMinimal.h"
#include "YSetActiveCharacterArchetypeRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveCharacterArchetypeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString archetypeId;
    
    BACKENDMODELS_API FYSetActiveCharacterArchetypeRequest();
};

