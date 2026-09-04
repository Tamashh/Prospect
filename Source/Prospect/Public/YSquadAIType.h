#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YAICharacterDefinition.h"
#include "YSquadAIType.generated.h"

USTRUCT(BlueprintType)
struct FYSquadAIType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAICharacterDefinition m_aiCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_gameplayTags;
    
    PROSPECT_API FYSquadAIType();
};

