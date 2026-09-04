#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanityUpdateBodyPart.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterVanityUpdateBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 material_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString archetypeId;
    
    BACKENDMODELS_API FYCharacterVanityUpdateBodyPart();
};

