#pragma once
#include "CoreMinimal.h"
#include "EYUserSessionConnectionState.h"
#include "YUserSessionConnectionStateChange.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYUserSessionConnectionStateChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserSessionConnectionState m_stateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_controllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserSessionConnectionState m_playfabAckedState;
    
    FYUserSessionConnectionStateChange();
};

