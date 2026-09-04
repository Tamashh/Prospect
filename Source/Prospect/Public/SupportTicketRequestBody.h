#pragma once
#include "CoreMinimal.h"
#include "SupportTicketComment.h"
#include "SupportTicketCustomFields.h"
#include "SupportTicketRequester.h"
#include "SupportTicketRequestBody.generated.h"

USTRUCT(BlueprintType)
struct FSupportTicketRequestBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupportTicketComment Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupportTicketRequester requester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupportTicketCustomFields CustomFields;
    
    PROSPECT_API FSupportTicketRequestBody();
};

