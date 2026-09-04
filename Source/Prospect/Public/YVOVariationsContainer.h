#pragma once
#include "CoreMinimal.h"
#include "YVOLine.h"
#include "YVOVariationsContainer.generated.h"

USTRUCT(BlueprintType)
struct FYVOVariationsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYVOLine> m_voVariations;
    
    PROSPECT_API FYVOVariationsContainer();
};

