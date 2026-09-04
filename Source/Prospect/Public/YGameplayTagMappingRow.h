#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YDataTableRowBase.h"
#include "YGameplayTagMappingRow.generated.h"

USTRUCT(BlueprintType)
struct FYGameplayTagMappingRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_gameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_tagDisplayText;
    
    PROSPECT_API FYGameplayTagMappingRow();
};

