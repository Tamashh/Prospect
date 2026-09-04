#pragma once
#include "CoreMinimal.h"
#include "YGetMissions.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetMissions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYGetMissions();
};

