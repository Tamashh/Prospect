#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "YDataTableRowBase.h"
#include "YMissionRuntimeData.h"
#include "YMissionDataTableRow.generated.h"

class UYOnboardingPlayerInstanceComponent;

USTRUCT(BlueprintType)
struct FYMissionDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYOnboardingPlayerInstanceComponent> m_missionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_missionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMissionRuntimeData> m_missionStepEntriesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_nextMissionRow;
    
    PROSPECT_API FYMissionDataTableRow();
};

