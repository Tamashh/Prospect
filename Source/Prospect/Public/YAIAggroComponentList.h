#pragma once
#include "CoreMinimal.h"
#include "YAIAggroComponentList.generated.h"

class UYAIAggroComponent;

USTRUCT(BlueprintType)
struct FYAIAggroComponentList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroComponent*> m_components;

    PROSPECT_API FYAIAggroComponentList();
};
