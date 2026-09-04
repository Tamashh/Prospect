#pragma once
#include "CoreMinimal.h"
#include "EYPlayerInitializationType.h"
#include "YPlayerInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerInitializationType m_initializationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeTakenToInitialize;
    
    PROSPECT_API FYPlayerInitializationData();
};

