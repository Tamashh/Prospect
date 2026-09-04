#pragma once
#include "CoreMinimal.h"
#include "YFactionLevel.generated.h"

USTRUCT(BlueprintType)
struct FYFactionLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_reputation;
    
    PROSPECT_API FYFactionLevel();
};

