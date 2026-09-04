#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YGameplayTagToLootPoolAssociation.generated.h"

USTRUCT(BlueprintType)
struct FYGameplayTagToLootPoolAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_gameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_lootTags;
    
    PROSPECT_API FYGameplayTagToLootPoolAssociation();
};

