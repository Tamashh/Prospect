#pragma once
#include "CoreMinimal.h"
#include "YSceneRuntimeData.h"
#include "YSceneRuntimeInitializationData.h"
#include "YSceneCompleteInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYSceneCompleteInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneRuntimeInitializationData m_runtimeInitializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneRuntimeData m_runtimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_uidHandle;
    
    PROSPECT_API FYSceneCompleteInitializationData();
};

