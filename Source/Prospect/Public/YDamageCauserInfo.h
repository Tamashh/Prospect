#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDamageCauserInfo.generated.h"

USTRUCT(BlueprintType)
struct FYDamageCauserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_damageCauserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_damageInfoCauserRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_armorBaseItemIds;
    
    PROSPECT_API FYDamageCauserInfo();
};

