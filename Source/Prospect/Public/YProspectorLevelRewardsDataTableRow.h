#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YProspectorLevelRewardsDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYProspectorLevelRewardsDataTableRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_startLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_borderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_iconPath;
    
    PROSPECT_API FYProspectorLevelRewardsDataTableRow();
};

