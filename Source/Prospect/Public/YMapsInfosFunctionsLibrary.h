#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YCountPerMap.h"
#include "YMapInfoRow.h"
#include "YMapsInfosFunctionsLibrary.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class PROSPECT_API UYMapsInfosFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYMapsInfosFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static FText GetName(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetMapsInfosRowNames(const UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMapPath(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UTexture2D> GetImage(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UMaterialInterface> GetHologramMaterial(UObject* objectContext, const FString& mapInfoRowId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFirstUnlockedMapInfoRowName(UObject* objectContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFirstUnlockedMapInfoRowHandle(UObject* objectContext, FYMapInfoRow& outRow, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindMapInfoRow(UObject* objectContext, const FString& mapInfoRowId, FYMapInfoRow& outRow, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCurrentMapInfoRowHandle(const UObject* objectContext, FDataTableRowHandle& outRowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static int32 DetermineCountBasedOnMap(UObject* objectContext, const FYCountPerMap& countPerMapInfo);
    
};

