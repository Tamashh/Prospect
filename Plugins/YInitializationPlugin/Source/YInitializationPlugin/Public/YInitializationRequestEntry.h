#pragma once
#include "CoreMinimal.h"
#include "EYInitializationRequestSettingTypes.h"
#include "YInitializationCompleteDelegateDynamicDelegate.h"
#include "YInitializationRequestEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYInitializationRequestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_relevantContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInitializationCompleteDelegateDynamic m_bpDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInitializationRequestSettingTypes m_requestType;
    
    YINITIALIZATIONPLUGIN_API FYInitializationRequestEntry();
};

