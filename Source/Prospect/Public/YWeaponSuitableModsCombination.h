#pragma once
#include "CoreMinimal.h"
#include "YWeaponSuitableModsCombination.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponSuitableModsCombination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_modCombinations;
    
    PROSPECT_API FYWeaponSuitableModsCombination();
};

