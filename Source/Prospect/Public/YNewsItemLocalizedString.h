#pragma once
#include "CoreMinimal.h"
#include "YNewsItemLocalizedString.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemLocalizedString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_strings;
    
    PROSPECT_API FYNewsItemLocalizedString();
};

