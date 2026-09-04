#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YQuestDataDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYQuestDataDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_questName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_questTaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_followQuest;
    
    PROSPECT_API FYQuestDataDataTableRow();
};

