#pragma once
#include "CoreMinimal.h"
#include "YAttachmentInsuranceInfo.h"
#include "YCustomItemInfo.h"
#include "YGameServerRequest.h"
#include "YBackendInvalidateInsuranceRequest.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInvalidateInsuranceRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAttachmentInsuranceInfo> attachments;
    
    BACKENDMODELS_API FYBackendInvalidateInsuranceRequest();
};

