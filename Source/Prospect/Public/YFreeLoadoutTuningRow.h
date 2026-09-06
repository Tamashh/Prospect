#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YFreeLoadoutTuningRow.generated.h"

USTRUCT(BlueprintType)
struct FYFreeLoadoutTuningRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_freeLoadoutCooldownSeconds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_freeLoadoutGlobalResetTimeHourUtc;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_freeLoadoutRowHandles;

    PROSPECT_API FYFreeLoadoutTuningRow();
};
