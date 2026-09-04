#pragma once
#include "CoreMinimal.h"
#include "YRolledPerkBI.generated.h"

USTRUCT(BlueprintType)
struct FYRolledPerkBI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString I;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 R;
    
    BACKENDMODELS_API FYRolledPerkBI();
};

