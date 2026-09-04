#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YDeveloperCreditsCategoriesDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYDeveloperCreditsCategoriesDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_categoryHeadline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_developers;
    
    PROSPECT_API FYDeveloperCreditsCategoriesDataTableRow();
};

