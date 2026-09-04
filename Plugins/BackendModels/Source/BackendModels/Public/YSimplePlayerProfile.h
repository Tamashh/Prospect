#pragma once
#include "CoreMinimal.h"
#include "YSimplePlayerProfile.generated.h"

USTRUCT(BlueprintType)
struct FYSimplePlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    BACKENDMODELS_API FYSimplePlayerProfile();
};

