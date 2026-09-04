#pragma once
#include "CoreMinimal.h"
#include "YAISpawnCharacterInfo.generated.h"

class AYAICharacter;

USTRUCT(BlueprintType)
struct FYAISpawnCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AYAICharacter> m_aiCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AYAICharacter> m_aiCharacterPrototypeVersion;
    
    PROSPECT_API FYAISpawnCharacterInfo();
};

