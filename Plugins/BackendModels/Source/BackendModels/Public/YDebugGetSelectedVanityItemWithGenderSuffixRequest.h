#pragma once
#include "CoreMinimal.h"
#include "YDebugGetSelectedVanityItemWithGenderSuffixRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGetSelectedVanityItemWithGenderSuffixRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;

    BACKENDMODELS_API FYDebugGetSelectedVanityItemWithGenderSuffixRequest();
};
