#pragma once
#include "CoreMinimal.h"
#include "YFilterWordEntry.generated.h"

USTRUCT(BlueprintType)
struct YCHATFILTERINGPLUGIN_API FYFilterWordEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_culture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_replacement;
    
    FYFilterWordEntry();
};

