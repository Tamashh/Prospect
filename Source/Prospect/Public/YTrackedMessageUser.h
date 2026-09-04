#pragma once
#include "CoreMinimal.h"
#include "YTrackedMessageUser.generated.h"

USTRUCT(BlueprintType)
struct FYTrackedMessageUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeSentMessage;
    
    PROSPECT_API FYTrackedMessageUser();
};

