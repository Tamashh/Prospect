#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YBattleEyeReplicatedMessageEntry.generated.h"

USTRUCT(BlueprintType)
struct FYBattleEyeReplicatedMessageEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_batchedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_guid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_length;
    
    YBATTLEEYE_API FYBattleEyeReplicatedMessageEntry();
};

