#pragma once
#include "CoreMinimal.h"
#include "YGetAllPlayfabUserData.generated.h"

USTRUCT(BlueprintType)
struct FYGetAllPlayfabUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetAllPlayfabUserData();
};

