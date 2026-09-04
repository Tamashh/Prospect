#pragma once
#include "CoreMinimal.h"
#include "YPlayerSkillData.h"
#include "YGetPlayerSkillsResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetPlayerSkillsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool succeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerSkillData> Data;
    
    FYGetPlayerSkillsResult();
};

