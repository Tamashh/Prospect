#pragma once
#include "CoreMinimal.h"
#include "YPlayerBattleEyePlayerInformation.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerBattleEyePlayerInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_username;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_typeHash;
    
    YBATTLEEYE_API FYPlayerBattleEyePlayerInformation();
};

