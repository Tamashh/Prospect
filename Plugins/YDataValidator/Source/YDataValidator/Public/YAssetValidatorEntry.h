#pragma once
#include "CoreMinimal.h"
#include "YAssetTagCheckEntry.h"
#include "YAssetValidatorEntry.generated.h"

USTRUCT(BlueprintType)
struct FYAssetValidatorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAssetTagCheckEntry> m_prefixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAssetTagCheckEntry> m_suffixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enabled;
    
    YDATAVALIDATOR_API FYAssetValidatorEntry();
};

