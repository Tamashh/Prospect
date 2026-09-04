#pragma once
#include "CoreMinimal.h"
#include "YAvailableVanity.generated.h"

USTRUCT(BlueprintType)
struct FYAvailableVanity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_vanityItemIds;
    
    PROSPECT_API FYAvailableVanity();
};

