#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanityUpdateArchetype.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterVanityUpdateArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString archetype_id;
    
    BACKENDMODELS_API FYCharacterVanityUpdateArchetype();
};

