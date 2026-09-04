#pragma once
#include "CoreMinimal.h"
#include "YDamageEvent.h"
#include "YRawDamageEventContainer.generated.h"

USTRUCT(BlueprintType)
struct FYRawDamageEventContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDamageEvent> m_events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_index;
    
    PROSPECT_API FYRawDamageEventContainer();
};

