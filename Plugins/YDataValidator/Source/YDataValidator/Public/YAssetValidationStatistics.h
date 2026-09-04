#pragma once
#include "CoreMinimal.h"
#include "YAssetValidatorEntry.h"
#include "YAssetValidationStatistics.generated.h"

USTRUCT(BlueprintType)
struct FYAssetValidationStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAssetValidatorEntry> m_enabledAssetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAssetValidatorEntry> m_disabledAssetTypes;
    
    YDATAVALIDATOR_API FYAssetValidationStatistics();
};

