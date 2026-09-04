#pragma once
#include "CoreMinimal.h"
#include "YActivityCountEntry.generated.h"

USTRUCT(BlueprintType)
struct FYActivityCountEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_stringIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_count;
    
    PROSPECT_API FYActivityCountEntry();
};

