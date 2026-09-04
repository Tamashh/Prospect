#pragma once
#include "CoreMinimal.h"
#include "NegotiationTransport.generated.h"

USTRUCT(BlueprintType)
struct FNegotiationTransport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Transport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TransferFormats;
    
    SIGNALR_API FNegotiationTransport();
};

