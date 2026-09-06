#pragma once
#include "CoreMinimal.h"
#include "YAICharacters.generated.h"

class AYAICharacter;

USTRUCT(BlueprintType)
struct FYAICharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYAICharacter*> m_aiCharacters;

    PROSPECT_API FYAICharacters();
};
