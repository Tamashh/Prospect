#pragma once
#include "CoreMinimal.h"
#include "YPingEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 instanceType;
    
    BACKENDMODELS_API FYPingEntry();
};

