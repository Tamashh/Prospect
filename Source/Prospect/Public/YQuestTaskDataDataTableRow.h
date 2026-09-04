#pragma once
#include "CoreMinimal.h"
#include "EYOnboardingQuestType.h"
#include "YDataTableRowBase.h"
#include "YQuestTaskDataDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYQuestTaskDataDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYOnboardingQuestType m_questType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_questTaskText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString customData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxProgress;
    
    PROSPECT_API FYQuestTaskDataDataTableRow();
};

