#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "Components/ActorComponent.h"
#include "OnInventoryBackendResponseDelegate.h"
#include "OnLoadoutPresetPurchaseDelegate.h"
#include "YLoadoutPresetUIItem.h"
#include "YControllerLoadoutPresetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerLoadoutPresetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadoutPresetPurchase OnLoadoutPresetPurchase;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYLoadoutPresetUIItem> m_presetItemMapping;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_takenInventoryItemMapping;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_missingItemData;

    UYControllerLoadoutPresetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryUpdateInventory(const FOnInventoryBackendResponse& inDelegate);

private:
    UFUNCTION(BlueprintCallable)
    void OnLoadoutPresetPurchaseResponse(bool successful, int32 loadoutpresetIndex, EYPurchaseWeaponShopItemStatus responseStatus);

public:
    UFUNCTION(BlueprintCallable)
    void Initialize();

    UFUNCTION(BlueprintCallable)
    bool GetItemMappingByCustomItemId(const FString& customItemID, FYLoadoutPresetUIItem& presetItem);

};
