#pragma once
#include "CoreMinimal.h"
#include "UObject/SoftObjectPath.h"
#include "YNewsItemLocalizedAsset.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemLocalizedAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftObjectPath> m_assets;

    PROSPECT_API FYNewsItemLocalizedAsset();
};
