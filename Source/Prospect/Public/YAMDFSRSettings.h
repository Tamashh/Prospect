#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAMDFSRSettings.generated.h"

UCLASS(Blueprintable, Config=Engine)
class PROSPECT_API UYAMDFSRSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableFSRIntegration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageUltraQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageBalanced;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentagePerformance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageHybridUltraQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageHybridQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageHybridBalanced;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_resolutionPercentageHybridPerformance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mipMapBiasUltraQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mipMapBiasQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mipMapBiasUltraBalanced;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mipMapBiasPerformance;
    
public:
    UYAMDFSRSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFSRIntegrationEnabled();
    
};

