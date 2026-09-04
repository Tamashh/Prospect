#pragma once
#include "CoreMinimal.h"
#include "YDespawnActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYDespawnActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    PROSPECT_API FYDespawnActorInfo();
};

