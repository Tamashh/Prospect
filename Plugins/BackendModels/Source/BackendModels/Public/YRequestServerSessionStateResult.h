#pragma once
#include "CoreMinimal.h"
#include "YMatchConnectionData.h"
#include "YRequestServerSessionStateResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestServerSessionStateResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchConnectionData connectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 retryCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canGoToSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool shouldCancel;
    
    BACKENDMODELS_API FYRequestServerSessionStateResult();
};

