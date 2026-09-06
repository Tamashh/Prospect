#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YWeakSpotData.h"
#include "YWeakspotsRow.generated.h"

USTRUCT(BlueprintType)
struct FYWeakspotsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYWeakSpotData> m_damageAreas;

    PROSPECT_API FYWeakspotsRow();
};

