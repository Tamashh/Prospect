#pragma once
#include "CoreMinimal.h"
#include "YLeaderBoardDataPerGameMode.h"
#include "YLeaderBoardData.generated.h"

USTRUCT(BlueprintType)
struct FYLeaderBoardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLeaderBoardDataPerGameMode> m_leaderBoardDataPerGameMode;
    
    PROSPECT_API FYLeaderBoardData();
};

