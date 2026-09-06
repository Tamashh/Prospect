#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "EYCustomizationCategory.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YActiveCustomizationData.h"
#include "YCharacterCustomizationArchetypeRow.h"
#include "YCharacterCustomizationBodyPart.h"
#include "YCharacterCustomizationDefaultDataRow.h"
#include "YVanityItemData.h"
#include "YCharacterCustomizationStaticFunctions.generated.h"

class UAnimMontage;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class UYCharacterCustomizationStaticFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCharacterCustomizationStaticFunctions();

    UFUNCTION(BlueprintCallable)
    static bool IsItemCompatibleWithArchetypeBodytype(const UObject* objCtx, FName archetypeId, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDefaultCharacterCustomizationData(const UObject* objCtx, FYCharacterCustomizationDefaultDataRow& outData);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> FindCustomizationImageFromBodyPart(FYCharacterCustomizationBodyPart part);
    
    UFUNCTION(BlueprintCallable)
    static void FindCompatibleSkeletalMeshesForBodytype(EYCustomizationBodyType bodyType, const FDataTableRowHandle& baseRowHandle, TSoftObjectPtr<USkeletalMesh>& firstPersonMeshOut, TSoftObjectPtr<USkeletalMesh>& thirdPersonMeshOut);

    UFUNCTION(BlueprintCallable)
    static bool FindCompatibleItemsForCategory(const UObject* objCtx, const TArray<EYCustomizationCategory>& Categories, FName archetypeId, TArray<FYVanityItemData>& outRowHandles, EYCustomizationBodyType bodyType);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCompatibleItemsForArchetypeCategory(const UObject* objCtx, const TArray<EYCustomizationCategory>& Categories, FName archetypeId, TArray<FYVanityItemData>& outVanityItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindCategoryCustomizationNameFromCategory(UObject* objectContext, EYCustomizationCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static bool FindBodyPartFromCategory(const UObject* objCtx, EYCustomizationCategory customizationCategory, const TArray<FYCharacterCustomizationBodyPart>& Data, FYCharacterCustomizationBodyPart& outHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool FindArchetypeRefRowGivenId(const UObject* objCtx, FName archetypeId, FYCharacterCustomizationArchetypeRow& outRow);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* FindAnimationFromCharacterRowHandle(const FDataTableRowHandle& baseRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculateRandomCustomizationData(const UObject* objCtx, FYActiveCustomizationData& outData);
    
};

