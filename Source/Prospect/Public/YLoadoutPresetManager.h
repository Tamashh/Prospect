#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YInventoryItem.h"
#include "YLoadoutPreset.h"
#include "YOnLoadoutPresetPurchaseCurrenciesUpdatedDelegate.h"
#include "YOnLoadoutPresetPurchaseItemsRemovedDelegate.h"
#include "YOnLoadoutPresetPurchaseResponseDelegate.h"
#include "YOnLoadoutPresetReceivedDelegate.h"
#include "YLoadoutPresetManager.generated.h"

class AActor;
class UYLoadoutPresetManager;
class UYStateInventoryComponent;

UCLASS(Blueprintable)
class PROSPECT_API UYLoadoutPresetManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLoadoutPresetReceived OnLoadoutPresetReceived;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLoadoutPresetPurchaseItemsRemoved OnLoadoutPresetPurchaseItemsRemoved;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLoadoutPresetPurchaseCurrenciesUpdated OnLoadoutPresetPurchaseCurrenciesUpdated;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLoadoutPresetPurchaseResponse OnLoadoutPresetPurchaseResponse;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoadoutPreset> m_loadoutPresets;

public:
    UYLoadoutPresetManager();

    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutPresetOnBackend(int32 loadoutPresetId);

    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutPresetFromPlayerSet(int32 loadoutPresetId, AActor* actorContext);

    UFUNCTION(BlueprintCallable)
    void SaveLoadoutPresetData(int32 loadoutPresetId, AActor* actorContext);

private:
    UFUNCTION(BlueprintCallable)
    void HandleItemAddedToStash(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item);

    UFUNCTION(BlueprintCallable)
    void HandleInventoryOrStashChange(UYStateInventoryComponent* stateInventoryComponent);

public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYLoadoutPresetManager* GetLoadoutPresetManager(const UObject* WorldContext, const FString& ctxStr);

    UFUNCTION(BlueprintCallable)
    FYLoadoutPreset GetLoadoutPresetById(int32 loadoutPresetId);

    UFUNCTION(BlueprintCallable)
    void FetchLoadoutPresetData();

};
