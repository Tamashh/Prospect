#pragma once
#include "CoreMinimal.h"
#include "YVanityMaterialItem.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYVanityMaterialItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    FYVanityMaterialItem();
};

