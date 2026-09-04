#pragma once
#include "CoreMinimal.h"
#include "YOnPlayerLoginTOCMigrationRequest.generated.h"

USTRUCT(BlueprintType)
struct FYOnPlayerLoginTOCMigrationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicId;
    
    BACKENDMODELS_API FYOnPlayerLoginTOCMigrationRequest();
};

