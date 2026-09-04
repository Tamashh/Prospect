#pragma once
#include "CoreMinimal.h"
#include "SupportTicketRequester.generated.h"

USTRUCT(BlueprintType)
struct FSupportTicketRequester {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Email;
    
    PROSPECT_API FSupportTicketRequester();
};

