#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YVanityItemRowBase.h"
#include "YBannerVanityRow.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FYBannerVanityRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> m_particleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundBase>> m_sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_particleSystemColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_secondPlateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPublished;
    
    PROSPECT_API FYBannerVanityRow();
};

