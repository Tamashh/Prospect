#pragma once
#include "CoreMinimal.h"
#include "YPlayfabTitleDataRetrival.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYPlayfabTitleDataRetrival {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_keyToData;
    
    FYPlayfabTitleDataRetrival();
};

