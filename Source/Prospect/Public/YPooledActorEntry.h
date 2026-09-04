#pragma once
#include "CoreMinimal.h"
#include "YPooledActorEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYPooledActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_isInUse: 1;
    
    PROSPECT_API FYPooledActorEntry();
};

