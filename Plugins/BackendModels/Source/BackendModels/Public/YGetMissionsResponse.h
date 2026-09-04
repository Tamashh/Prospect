#pragma once
#include "CoreMinimal.h"
#include "YMissionUpdateDataEntry.h"
#include "YGetMissionsResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetMissionsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMissionUpdateDataEntry> missions;
    
    FYGetMissionsResponse();
};

