#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YItemSortingLayer.h"
#include "YItemSortingManager.generated.h"

class UDataAsset;
class UYItemSortingManager;
class UYItemSortingSettingsDataAsset;

UCLASS(Blueprintable, Config=Game)
class PROSPECT_API UYItemSortingManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSortingMethodChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSortingMethodChangedDelegate OnSortingMethodChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> m_itemSortingSettingsDataAssetSoftPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYItemSortingSettingsDataAsset* m_itemSortingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_itemSortingLayerRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sortingEnabled;
    
public:
    UYItemSortingManager();

    UFUNCTION(BlueprintCallable)
    void ToggleSorting(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void NextLayerRowHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYItemSortingManager* GetItemSortingManager(const UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetItemSortingLayersFromContext(const UObject* WorldContext, TArray<FYItemSortingLayer>& itemSortingLayers, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemSortingLayers(TArray<FYItemSortingLayer>& itemSortingLayers, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCurrentItemSortingLayerRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool GetCurrentItemSortingLayerFromContext(const UObject* WorldContext, FYItemSortingLayer& itemSortingLayer, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentItemSortingLayer(FYItemSortingLayer& itemSortingLayer, const FString& contextString);
    
};

