#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EYItemRarityType.h"
#include "YItemRecipe.h"
#include "YLevelItemEntry.h"
#include "YRarityVisualizationData.h"
#include "YRarityFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYRarityFunctions : public UObject {
    GENERATED_BODY()
public:
    UYRarityFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RarityIsNotValid(EYItemRarityType itemRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidRarity(EYItemRarityType rarity);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbleToUpgradeItem(AActor* actorCtx, const FString& ItemId, FString& playerMessage);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbleToTuneWeapon(AActor* actorCtx, const FString& ItemId, FString& playerMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindRarityVisualizationForType(const UObject* objCtx, EYItemRarityType Type, FYRarityVisualizationData& outVisualizationData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FColor FindRarityColor(UObject* WorldContext, EYItemRarityType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemRarityType FindNextDesirableLevelFromRarityTypes(EYItemRarityType fromRarity, bool Positive, const TMap<EYItemRarityType, FYLevelItemEntry>& m_rarityTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemRarityType FindNextDesirableLevel(EYItemRarityType fromRarity, bool Positive);
    
    UFUNCTION(BlueprintCallable)
    static bool FindItemUpgradeRecipe(AActor* actorCtx, const FString& ItemId, FYItemRecipe& outItemUpgradeRecipe);
    
    UFUNCTION(BlueprintCallable)
    static bool FindItemUpgradeCurrencyCost(AActor* actorCtx, const FString& ItemId, int32& outCurrencyCost);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCurrentLevelEntryFromId(AActor* actorContext, const FString& ItemId, FYLevelItemEntry& outEntry);
    
    UFUNCTION(BlueprintCallable)
    static EYItemRarityType FindCurrentItemRarity(AActor* actorContext, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ConvertItemRarityEnumToString(EYItemRarityType itemRarity, const FString& contextString);
    
};

