#pragma once
#include "CoreMinimal.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YCustomizationVisualizationState.generated.h"

USTRUCT(BlueprintType)
struct FYCustomizationVisualizationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_baseWeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_customWeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveWeaponCharacterInitializationData m_initializationData;
    
    PROSPECT_API FYCustomizationVisualizationState();
};

