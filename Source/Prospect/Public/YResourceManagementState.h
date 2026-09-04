#pragma once
#include "CoreMinimal.h"
#include "EYResourceAtomicState.h"
#include "YResourceManagementState.generated.h"

USTRUCT(BlueprintType)
struct FYResourceManagementState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYResourceAtomicState m_state;
    
    PROSPECT_API FYResourceManagementState();
};

