#pragma once
#include "CoreMinimal.h"
#include "YPlayerShardData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYPlayerShardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    PROSPECT_API FYPlayerShardData();
};

