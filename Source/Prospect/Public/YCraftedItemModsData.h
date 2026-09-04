#pragma once
#include "CoreMinimal.h"
#include "YCraftedItemModsData.generated.h"

USTRUCT(BlueprintType)
struct FYCraftedItemModsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> modsIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> modsRoll;
    
    PROSPECT_API FYCraftedItemModsData();
};

