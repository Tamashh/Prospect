#pragma once
#include "CoreMinimal.h"
#include "YUIFortunaPassActionData.generated.h"

USTRUCT(BlueprintType)
struct FYUIFortunaPassActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description;
    
    PROSPECT_API FYUIFortunaPassActionData();
};

