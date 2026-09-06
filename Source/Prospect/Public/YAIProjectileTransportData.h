#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YAIProjectileTransportData.generated.h"

USTRUCT(BlueprintType)
struct FYAIProjectileTransportData {
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

    PROSPECT_API FYAIProjectileTransportData();
};

