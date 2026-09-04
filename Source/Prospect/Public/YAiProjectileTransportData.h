#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YAiProjectileTransportData.generated.h"

USTRUCT(BlueprintType)
struct FYAiProjectileTransportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_shootFromLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_shootAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_launchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_gravityZMultiplier;
    
    PROSPECT_API FYAiProjectileTransportData();
};

