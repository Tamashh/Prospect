#pragma once
#include "CoreMinimal.h"
#include "YInteractionReleaseEntry.generated.h"

USTRUCT(BlueprintType)
struct FYInteractionReleaseEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minInterpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxinterpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_text;
    
    PROSPECT_API FYInteractionReleaseEntry();
};

