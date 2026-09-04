#pragma once
#include "CoreMinimal.h"
#include "YPlayfabExecuteEventMessage.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayfabExecuteEventMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_service;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_eventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_keyToJsons;
    
    FYPlayfabExecuteEventMessage();
};

