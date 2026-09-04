#pragma once
#include "CoreMinimal.h"
#include "LanguageSelectionData.generated.h"

USTRUCT(BlueprintType)
struct FLanguageSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_cultureAberration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_cultureLabel;
    
    PROSPECT_API FLanguageSelectionData();
};

