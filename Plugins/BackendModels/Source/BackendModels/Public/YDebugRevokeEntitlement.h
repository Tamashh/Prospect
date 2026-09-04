#pragma once
#include "CoreMinimal.h"
#include "YDebugRevokeEntitlement.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugRevokeEntitlement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entitlementName;
    
    FYDebugRevokeEntitlement();
};

