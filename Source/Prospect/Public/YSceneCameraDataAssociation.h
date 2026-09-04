#pragma once
#include "CoreMinimal.h"
#include "YSceneCameraDataRuntimeEntry.h"
#include "YSceneCameraDataAssociation.generated.h"

USTRUCT(BlueprintType)
struct FYSceneCameraDataAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSceneCameraDataRuntimeEntry> m_runtimeEntries;
    
    PROSPECT_API FYSceneCameraDataAssociation();
};

