#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YActionBaseConditions.generated.h"

USTRUCT(BlueprintType)
struct FYActionBaseConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_locationConditions;
    
    PROSPECT_API FYActionBaseConditions();
};

