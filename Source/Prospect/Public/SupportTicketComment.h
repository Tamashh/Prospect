#pragma once
#include "CoreMinimal.h"
#include "SupportTicketComment.generated.h"

USTRUCT(BlueprintType)
struct FSupportTicketComment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    PROSPECT_API FSupportTicketComment();
};

