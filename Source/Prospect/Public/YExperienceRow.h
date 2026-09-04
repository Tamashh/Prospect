#pragma once
#include "CoreMinimal.h"
#include "EYExperienceType.h"
#include "YItemDataTableRowBase.h"
#include "YExperienceRow.generated.h"

USTRUCT(BlueprintType)
struct FYExperienceRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYExperienceType m_experienceType;
    
    PROSPECT_API FYExperienceRow();
};

