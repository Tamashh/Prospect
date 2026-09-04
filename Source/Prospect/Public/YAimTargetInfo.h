#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YAimTargetInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYAimTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_targetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_targetLocation;
    
    PROSPECT_API FYAimTargetInfo();
};

