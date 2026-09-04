#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsCategory.h"
#include "YDataTableRowBase.h"
#include "YItemStatsAssociationCollection.h"
#include "YItemStatsSettingsRow.generated.h"

USTRUCT(BlueprintType)
struct FYItemStatsSettingsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemStatsCategory, FYItemStatsAssociationCollection> m_statsDefinitions;
    
    PROSPECT_API FYItemStatsSettingsRow();
};

