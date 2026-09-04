#pragma once
#include "CoreMinimal.h"
#include "YReplicatedRankData.generated.h"

USTRUCT(BlueprintType)
struct FYReplicatedRankData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_prevRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_unplaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_receivedBackendData;
    
    PROSPECT_API FYReplicatedRankData();
};

