#pragma once
#include "CoreMinimal.h"
#include "YPurchaseWeaponShopItemRequest.generated.h"

USTRUCT(BlueprintType)
struct FYPurchaseWeaponShopItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString blueprintName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 blueprintRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 purchaseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString baseItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString shopItemBelongsTo;
    
    BACKENDMODELS_API FYPurchaseWeaponShopItemRequest();
};

