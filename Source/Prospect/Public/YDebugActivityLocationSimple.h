#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EYActivityLocationStatus.h"
#include "YDebugActivityLocationSimple.generated.h"

USTRUCT(BlueprintType)
struct FYDebugActivityLocationSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 m_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityLocationStatus m_status;
    
    PROSPECT_API FYDebugActivityLocationSimple();
};

