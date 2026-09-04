#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YHitZoneDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYHitZoneDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_bones;
    
    PROSPECT_API FYHitZoneDataTableRow();
};

