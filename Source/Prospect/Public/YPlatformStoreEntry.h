#pragma once
#include "CoreMinimal.h"
#include "EYGamePlatform.h"
#include "YPlatformStoreEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPlatformStoreEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGamePlatform m_platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOneTimePurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_offerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_entitlementId;
    
    PROSPECT_API FYPlatformStoreEntry();
};

