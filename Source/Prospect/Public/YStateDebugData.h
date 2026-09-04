#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YStateDebugData.generated.h"

USTRUCT(BlueprintType)
struct FYStateDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_output;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    PROSPECT_API FYStateDebugData();
};

