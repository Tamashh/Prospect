#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.h"
#include "YAttachmentInsuranceInfo.generated.h"

USTRUCT(BlueprintType)
struct FYAttachmentInsuranceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString insuredAttachmentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInsuranceType insurance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString insuranceOwnerPlayfabId;
    
    BACKENDMODELS_API FYAttachmentInsuranceInfo();
};

