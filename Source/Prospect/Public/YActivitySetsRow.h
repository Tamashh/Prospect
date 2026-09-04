#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYActivityType.h"
#include "YActivitySetsRow.generated.h"

USTRUCT(BlueprintType)
struct FYActivitySetsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYActivityType> m_activities;
    
    PROSPECT_API FYActivitySetsRow();
};

