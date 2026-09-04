#pragma once
#include "CoreMinimal.h"
#include "EYPlayerInitializationType.h"
#include "YPlayerInitializationData.h"
#include "YTravelData.h"
#include "YPlayerLoadingData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerLoadingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTravelData m_travelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_interruptionCauseBitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeStartedInitialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initializationCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeTakenToInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYPlayerInitializationType> m_requiredInitializationTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerInitializationData> m_playerInitializationData;
    
    PROSPECT_API FYPlayerLoadingData();
};

