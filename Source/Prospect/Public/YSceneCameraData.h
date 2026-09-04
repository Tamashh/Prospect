#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YSceneCameraData.generated.h"

USTRUCT(BlueprintType)
struct FYSceneCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_sceneRowHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_cameraPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ignoreSceneState;
    
    PROSPECT_API FYSceneCameraData();
};

