#pragma once
#include "CoreMinimal.h"
#include "YDefaultDirectXVersion.generated.h"

USTRUCT(BlueprintType)
struct FYDefaultDirectXVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_defaultDirectXVersion;
    
    PROSPECT_API FYDefaultDirectXVersion();
};

