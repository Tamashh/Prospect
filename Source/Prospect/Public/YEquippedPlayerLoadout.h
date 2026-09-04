#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YEquippedPlayerLoadout.generated.h"

USTRUCT(BlueprintType)
struct FYEquippedPlayerLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_abilities;
    
    PROSPECT_API FYEquippedPlayerLoadout();
};

