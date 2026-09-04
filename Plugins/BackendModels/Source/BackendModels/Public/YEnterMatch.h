#pragma once
#include "CoreMinimal.h"
#include "YEnterMatch.generated.h"

USTRUCT(BlueprintType)
struct FYEnterMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_matchTicket;
    
    BACKENDMODELS_API FYEnterMatch();
};

