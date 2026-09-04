#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YActiveWorldMarkerData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveWorldMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_markerTargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_markerTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_stackSize;
    
    PROSPECT_API FYActiveWorldMarkerData();
};

