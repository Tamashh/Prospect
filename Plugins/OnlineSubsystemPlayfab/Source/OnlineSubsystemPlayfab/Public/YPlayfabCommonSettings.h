#pragma once
#include "CoreMinimal.h"
#include "YPlayfabCommonSettings.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMPLAYFAB_API FYPlayfabCommonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_localApiServerTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_normalAzureFunctionTimeout;
    
    FYPlayfabCommonSettings();
};

