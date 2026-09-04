#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YAICharacterDefinition.h"
#include "YSpawnTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct FYSpawnTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAICharacterDefinition m_aiCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_tags;
    
    PROSPECT_API FYSpawnTypeInfo();
};

