#pragma once
#include "CoreMinimal.h"
#include "YLoadoutPresetData.h"
#include "YUpdateLoadoutPresetRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateLoadoutPresetRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYLoadoutPresetData loadoutPresetData;

    BACKENDMODELS_API FYUpdateLoadoutPresetRequest();
};
