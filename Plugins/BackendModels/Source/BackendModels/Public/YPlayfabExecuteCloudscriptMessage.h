#pragma once
#include "CoreMinimal.h"
#include "YPlayfabExecuteCloudscriptMessage.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayfabExecuteCloudscriptMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_functionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_jsonData;
    
    FYPlayfabExecuteCloudscriptMessage();
};

