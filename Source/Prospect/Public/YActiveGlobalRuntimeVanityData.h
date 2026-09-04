#pragma once
#include "CoreMinimal.h"
#include "YGlobalVanityItem.h"
#include "YActiveGlobalRuntimeVanityData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveGlobalRuntimeVanityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGlobalVanityItem> m_activeUsableVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGlobalVanityItem m_droppodHandle;
    
    PROSPECT_API FYActiveGlobalRuntimeVanityData();
};

