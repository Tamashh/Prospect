#pragma once
#include "CoreMinimal.h"
#include "YFullscreenScopeData.generated.h"

USTRUCT(BlueprintType)
struct FYFullscreenScopeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_widgetClass;
    
    PROSPECT_API FYFullscreenScopeData();
};

