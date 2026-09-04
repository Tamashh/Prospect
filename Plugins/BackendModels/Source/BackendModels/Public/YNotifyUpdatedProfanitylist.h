#pragma once
#include "CoreMinimal.h"
#include "YNotifyUpdatedProfanitylist.generated.h"

USTRUCT(BlueprintType)
struct FYNotifyUpdatedProfanitylist {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> profanityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> regexProfanityList;
    
    BACKENDMODELS_API FYNotifyUpdatedProfanitylist();
};

