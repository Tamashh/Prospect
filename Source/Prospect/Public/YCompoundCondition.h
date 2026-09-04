#pragma once
#include "CoreMinimal.h"
#include "YCondition.h"
#include "YConditions.h"
#include "YCompoundCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYCompoundCondition : public UYCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYConditions m_conditions;
    
public:
    UYCompoundCondition();

};

