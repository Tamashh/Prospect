#pragma once
#include "CoreMinimal.h"
#include "YDebugUpdateDeveloperModeRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugUpdateDeveloperModeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeveloperModeEnabled;
    
    YAZUREFUNCTIONSUTILS_API FYDebugUpdateDeveloperModeRequest();
};

