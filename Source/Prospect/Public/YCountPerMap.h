#pragma once
#include "CoreMinimal.h"
#include "EYMapType.h"
#include "YCountPerMap.generated.h"

USTRUCT(BlueprintType)
struct FYCountPerMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYMapType, int32> m_mapOverride;
    
    PROSPECT_API FYCountPerMap();
};

