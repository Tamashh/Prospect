#pragma once
#include "CoreMinimal.h"
#include "YPlayerSkillData.h"
#include "YModifyPlayerSkillsResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYModifyPlayerSkillsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool succeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerSkillData> entries;
    
    FYModifyPlayerSkillsResult();
};

