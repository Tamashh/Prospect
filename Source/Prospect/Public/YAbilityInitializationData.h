#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAbilityInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYAbilityInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_abilities;
    
    PROSPECT_API FYAbilityInitializationData();
};

