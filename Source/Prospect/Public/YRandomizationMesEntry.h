#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "YRandomizationMesEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYRandomizationMesEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationBodyType m_desiredBodyType;
    
    PROSPECT_API FYRandomizationMesEntry();
};

