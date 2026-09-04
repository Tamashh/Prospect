#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanityResetAppearance.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterVanityResetAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYCharacterVanityResetAppearance();
};

