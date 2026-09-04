#pragma once
#include "CoreMinimal.h"
#include "YMockPlayerActor_Test.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FYMockPlayerActor_Test {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* m_world;
    
    PROSPECT_API FYMockPlayerActor_Test();
};

