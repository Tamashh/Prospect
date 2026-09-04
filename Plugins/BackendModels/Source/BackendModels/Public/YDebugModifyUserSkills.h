#pragma once
#include "CoreMinimal.h"
#include "YDebugModifyUserSkills.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugModifyUserSkills {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 deviation;
    
    FYDebugModifyUserSkills();
};

