#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.h"
#include "UObject/Object.h"
#include "YActiveGlobalRuntimeVanityData.h"
#include "YOnGlobalVanityUpdatedDelegate.h"
#include "YGlobalVanityModel.generated.h"

UCLASS(Blueprintable)
class UYGlobalVanityModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnGlobalVanityUpdated OnGlobalVanityUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalRuntimeVanityData m_globalVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalRuntimeVanityData m_pendingGlobalVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalVanity m_globalVanityRawBackendData;
    
public:
    UYGlobalVanityModel();

};

