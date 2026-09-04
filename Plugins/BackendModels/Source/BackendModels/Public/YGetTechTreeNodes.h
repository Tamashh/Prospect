#pragma once
#include "CoreMinimal.h"
#include "YGetTechTreeNodes.generated.h"

USTRUCT(BlueprintType)
struct FYGetTechTreeNodes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetTechTreeNodes();
};

