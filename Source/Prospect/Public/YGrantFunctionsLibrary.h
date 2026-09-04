#pragma once
#include "CoreMinimal.h"
#include "YGrantRow.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YGrantFunctionsLibrary.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGrantFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYGrantFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static bool HasClaimedGrant(UObject* objectContext, const FString& grantId, const FString& contextString, bool checkOnlyClaimedState);
    
    UFUNCTION(BlueprintCallable)
    static bool HasCachedGrant(UObject* objectContext, const FString& grantId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool HasArchetypeItem(UObject* objectContext, const FString& grantRowId, FDataTableRowHandle& outArchetypeItemRowHandle, const FString& contextStr);
    
    UFUNCTION(BlueprintCallable)
    static void FindGrantRows(const UObject* objectContext, const TArray<FString>& grantRowIds, TArray<FYGrantRow>& outGrantRows, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindGrantRow(const UObject* objectContext, const FString& grantRowId, FYGrantRow& outGrantRow, const FString& contextString);
    
};

