#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYCustomizationModelType.h"
#include "YVanityItemData.h"
#include "YCharacterModelFunctions.generated.h"

class UYCharacterCustomizationModel;

UCLASS(Blueprintable)
class UYCharacterModelFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCharacterModelFunctions();

    UFUNCTION(BlueprintCallable)
    static void TryUpdateCustomizationPreviewForCategoriesAndVanityItems(const UObject* objCtx, const FDataTableRowHandle& previewedItemRowHandle, const TArray<FDataTableRowHandle>& vanityRows, TSet<EYCustomizationCategory> customizationCategories);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetCharacterCustomizationCategoryToPersistent(const UObject* objCtx, const FString& UserId, EYCustomizationCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPersistentAndPendingStorageEqualForLocal(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPersistentAndPendingStorageEqual(const UObject* objCtx, const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPendingStorageOwned(UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFullSuitEquipped(const UObject* objCtx, EYCustomizationModelType customizationModelType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterModelItemEquipped(const UObject* objCtx, const FString& UserId, UPARAM(Ref) FYVanityItemData& vanityItem, EYCustomizationModelType modelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindModelSelectedArchetype(const UObject* objCtx, EYCustomizationModelType modelType);
    
    UFUNCTION(BlueprintCallable)
    static UYCharacterCustomizationModel* FindLocalCharacterCustomizationModel(const UObject* objCtx);
    
};

