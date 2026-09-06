#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YDebugMessage.generated.h"

USTRUCT(BlueprintType)
struct FYDebugMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_fullText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_color;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scale;

    PROSPECT_API FYDebugMessage();
};

