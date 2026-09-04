#pragma once
#include "CoreMinimal.h"
#include "YActorArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYActorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_actors;
    
    PROSPECT_API FYActorArray();
};

