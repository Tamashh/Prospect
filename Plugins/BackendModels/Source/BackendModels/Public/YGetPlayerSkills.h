#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerSkills.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetPlayerSkills {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> uniqueIds;
    
    FYGetPlayerSkills();
};

