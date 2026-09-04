#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YCraftedItemData.generated.h"

USTRUCT(BlueprintType)
struct FYCraftedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsGrantedOrUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString blueprintName;
    
    BACKENDMODELS_API FYCraftedItemData();
};

