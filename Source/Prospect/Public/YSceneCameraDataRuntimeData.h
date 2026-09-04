#pragma once
#include "CoreMinimal.h"
#include "YSceneCameraDataAssociation.h"
#include "YSceneCameraDataRuntimeData.generated.h"

USTRUCT(BlueprintType)
struct FYSceneCameraDataRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneCameraDataAssociation m_defaultDataAssociation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_desiredSuffix;
    
    PROSPECT_API FYSceneCameraDataRuntimeData();
};

