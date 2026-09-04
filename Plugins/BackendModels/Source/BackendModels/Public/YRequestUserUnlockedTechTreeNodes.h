#pragma once
#include "CoreMinimal.h"
#include "YRequestUserUnlockedTechTreeNodes.generated.h"

USTRUCT(BlueprintType)
struct FYRequestUserUnlockedTechTreeNodes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYRequestUserUnlockedTechTreeNodes();
};

