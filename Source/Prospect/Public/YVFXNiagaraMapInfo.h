#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YVFXNiagaraMapInfo.generated.h"

USTRUCT(BlueprintType)
struct FYVFXNiagaraMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StormOccusionCenter01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormOcclusionRadius01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StormOccusionCenter02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormOcclusionRadius02;
    
    PROSPECT_API FYVFXNiagaraMapInfo();
};

