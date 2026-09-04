#pragma once
#include "CoreMinimal.h"
#include "EYSignlarState.h"
#include "YSignalRInstance.h"
#include "YSignalInstance.generated.h"

UCLASS(Blueprintable)
class SIGNALR_API UYSignalInstance : public UYSignalRInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSignlarState m_state;
    
public:
    UYSignalInstance();

};

