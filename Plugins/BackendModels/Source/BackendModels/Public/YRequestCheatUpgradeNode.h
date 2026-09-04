#pragma once
#include "CoreMinimal.h"
#include "YRequestCheatUpgradeNode.generated.h"

USTRUCT(BlueprintType)
struct FYRequestCheatUpgradeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nodeId;
    
    BACKENDMODELS_API FYRequestCheatUpgradeNode();
};

