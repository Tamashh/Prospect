#pragma once
#include "CoreMinimal.h"
#include "YResourceManagerRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct FYResourceManagerRequestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_handle;
    
    PROSPECT_API FYResourceManagerRequestEntry();
};

