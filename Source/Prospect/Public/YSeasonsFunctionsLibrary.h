#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YSeasonRow.h"
#include "YSeasonsFunctionsLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PROSPECT_API UYSeasonsFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYSeasonsFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsASeasonActive(UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool HasReachedMaxSeasonLevel(UObject* objectContext, const FName& seasonRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPurchasedSeasonPass(UObject* objectContext, const FString& seasonRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerSeasonLevel(UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaxSeasonLevel(UObject* objectContext, const FName& seasonRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetLogo(UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetImage(UObject* objCtx, const FString& ctxString, bool useLargeImage);
    
    UFUNCTION(BlueprintCallable)
    static FName GetActiveSeasonRowId(UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindSeasonRow(const UObject* objectContext, const FName& seasonRowId, FYSeasonRow& outSeasonRow, const FString& callerContext);
    
};

