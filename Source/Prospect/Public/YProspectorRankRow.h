#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YProspectorRankRow.generated.h"

USTRUCT(BlueprintType)
struct FYProspectorRankRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rankAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_startRank;
    
    PROSPECT_API FYProspectorRankRow();
};

