#pragma once
#include "CoreMinimal.h"
#include "YFactionProgress.h"
#include "UObject/Object.h"
#include "YFactionsDataTableRow.h"
#include "YFactionFunctionsLibrary.generated.h"

class AYPlayerState;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class PROSPECT_API UYFactionFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYFactionFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ShouldShowFactionLevelInShop(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInterface* GetVendorIcon(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetRewardDescription(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetName(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLeaderTitle(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetLeaderName(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetHeadline(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FYFactionsDataTableRow GetFactionStaticData(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetFactionSmallIcon(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFactionProgressSum(const AYPlayerState* PlayerState, int32& reputation, int32& Level, TArray<FYFactionProgress>& allFactionProgress);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetFactionIconLarge(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDetailedDescription(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDescription(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetAltVendorIcon(UObject* objectContext, const FString& factionRowId, const FString& contextString);
    
};

