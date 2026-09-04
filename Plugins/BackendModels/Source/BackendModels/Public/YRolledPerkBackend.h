#pragma once
#include "CoreMinimal.h"
#include "YRolledPerkBackend.generated.h"

USTRUCT(BlueprintType)
struct FYRolledPerkBackend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float R;
    
    BACKENDMODELS_API FYRolledPerkBackend();
};

