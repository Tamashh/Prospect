#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YDroppodDataTableRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYDroppodDataTableRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> m_desiredDroppodPath;
    
    PROSPECT_API FYDroppodDataTableRow();
};

