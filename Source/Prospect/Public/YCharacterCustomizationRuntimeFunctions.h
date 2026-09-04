#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "EYCustomizationCategory.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YActiveCustomizationData.h"
#include "YActiveGlobalRuntimeVanityData.h"
#include "YCharacterCustomizationBodyPart.h"
#include "YCharacterCustomizationRuntimeFunctions.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable)
class UYCharacterCustomizationRuntimeFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCharacterCustomizationRuntimeFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetPreviewCustomizationActorFromArcheTypeId(const UObject* objCtx, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void SetPreviewCustomizationActorFromActiveCustomizationData(const UObject* objCtx, const FYActiveCustomizationData& Data);
    
    UFUNCTION(BlueprintCallable)
    static FYActiveGlobalRuntimeVanityData FindRelevantVanityItemsCustomization(AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable)
    static bool FindEquippedPartForCategory(EYCustomizationCategory categoryType, AActor* actorContext, FYCharacterCustomizationBodyPart& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindCustomizationCategoryNameFromID(const UObject* objectContext, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYCustomizationBodyType FindBodyType(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYActiveCustomizationData FindActiveCustomizationData(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindActiveArchetypeId(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* FindActiveAnimationForCategory(EYCustomizationCategory Category, AActor* activeActor);
    
};

