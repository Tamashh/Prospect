#pragma once
#include "CoreMinimal.h"
#include "EYInputUIStackType.h"
#include "YInputStackRuntimeContext.h"
#include "YRegisteredStackInput.generated.h"

USTRUCT(BlueprintType)
struct FYRegisteredStackInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInputStackRuntimeContext> m_runtimeMinorStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInputUIStackType m_stackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    PROSPECT_API FYRegisteredStackInput();
};

