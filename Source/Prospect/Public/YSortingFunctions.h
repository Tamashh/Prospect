#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YSortingRequest.h"
#include "YSortingFunctions.generated.h"

UCLASS(Blueprintable)
class UYSortingFunctions : public UObject {
    GENERATED_BODY()
public:
    UYSortingFunctions();

    UFUNCTION(BlueprintCallable)
    static void SortItems(const UObject* objCtx, const FYSortingRequest& Request, TArray<FDataTableRowHandle>& outSortedRowItems);
    
};

