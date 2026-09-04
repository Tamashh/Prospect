#pragma once
#include "CoreMinimal.h"
#include "YModifySkillEntry.h"
#include "YModifyPlayerSkills.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYModifyPlayerSkills {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYModifySkillEntry> entries;
    
    FYModifyPlayerSkills();
};

