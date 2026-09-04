#pragma once
#include "CoreMinimal.h"
#include "YNewLegalAgreementsResponse.generated.h"

USTRUCT(BlueprintType)
struct FYNewLegalAgreementsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requiredNDAVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requiredEULAVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasAccepted;
    
    YPLATFORMUTILS_API FYNewLegalAgreementsResponse();
};

