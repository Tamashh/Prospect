#pragma once
#include "CoreMinimal.h"
#include "EYActionType.h"
#include "YActionBaseConditions.h"
#include "YActionContractConditions.h"
#include "YActionKillConditions.h"
#include "YDataTableRowBase.h"
#include "YUIFortunaPassActionData.h"
#include "YFortunaPassAction.generated.h"

USTRUCT(BlueprintType)
struct FYFortunaPassAction : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActionType m_actionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActionBaseConditions m_actionBaseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActionKillConditions m_actionKillConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActionContractConditions m_actionContractConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUIFortunaPassActionData m_uiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_seasonGrantedXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dailyCapXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_xpGrantFrequency;
    
    PROSPECT_API FYFortunaPassAction();
};

