#pragma once
#include "CoreMinimal.h"
#include "YPlayfabUserAccountInfo.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYPlayfabUserAccountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userDisplayName;
    
    FYPlayfabUserAccountInfo();
};

