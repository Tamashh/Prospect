#pragma once
#include "CoreMinimal.h"
#include "YEventArray.generated.h"

USTRUCT(BlueprintType)
struct FYEventArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> m_entries;
    
    PROSPECT_API FYEventArray();
};

