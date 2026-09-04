#pragma once
#include "CoreMinimal.h"
#include "YDebugOnPlayerLoginTOCMigrationRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugOnPlayerLoginTOCMigrationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicId;
    
    BACKENDMODELS_API FYDebugOnPlayerLoginTOCMigrationRequest();
};

