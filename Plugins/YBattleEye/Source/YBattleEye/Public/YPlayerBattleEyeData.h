#pragma once
#include "CoreMinimal.h"
#include "YPlayerBattleEyeData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerBattleEyeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_port;
    
    YBATTLEEYE_API FYPlayerBattleEyeData();
};

