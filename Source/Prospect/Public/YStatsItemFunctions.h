#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYGameplayAttribute.h"
#include "EYItemStatsCategory.h"
#include "EYItemStatsType.h"
#include "YGameplayAttributeModifier.h"
#include "YItemStatsAssociationCollection.h"
#include "YItemStatsAssociationEntry.h"
#include "YStatsTypeDataEntry.h"
#include "YStatsItemFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYStatsItemFunctions : public UObject {
    GENERATED_BODY()
public:
    UYStatsItemFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindTextFromStatsType(EYItemStatsType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool FindStatsTypeFromAttribute(EYGameplayAttribute Attribute, TArray<EYItemStatsType>& outTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindStatsDefinition(EYItemStatsCategory statsCategory, EYItemStatsType Type, FYItemStatsAssociationEntry& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemStatsCategory FindStatsCategoryFromRowHandle(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindStatsAssociationCollectionFromCategory(EYItemStatsCategory statsCategory, FYItemStatsAssociationCollection& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FYStatsTypeDataEntry FindItemStatTypeFromRowHandle(FDataTableRowHandle baseItemRowHandle, EYItemStatsType Type, const TArray<FDataTableRowHandle>& rowHandles, const TArray<FYGameplayAttributeModifier>& attributeModifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemStatsCategory FindItemStatsCategoryFromItemType(EYItemType Type, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* FindCDOActorFromImpactActor(FDataTableRowHandle rowHandle);
    
};

