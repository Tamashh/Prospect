#pragma once
#include "CoreMinimal.h"
#include "YClientSkillUpdated.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYClientSkillUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 deviation;
    
    FYClientSkillUpdated();
};

