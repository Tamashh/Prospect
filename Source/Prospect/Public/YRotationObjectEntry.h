#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YRotationObjectEntry.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FYRotationObjectEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_originalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_component;
    
    PROSPECT_API FYRotationObjectEntry();
};

