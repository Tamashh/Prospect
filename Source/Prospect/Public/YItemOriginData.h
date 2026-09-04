#pragma once
#include "CoreMinimal.h"
#include "EYItemOriginType.h"
#include "YItemOriginData.generated.h"

USTRUCT(BlueprintType)
struct FYItemOriginData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemOriginType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_guid;
    
    PROSPECT_API FYItemOriginData();
};

