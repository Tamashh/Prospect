#pragma once
#include "CoreMinimal.h"
#include "YMetaItemUIData.generated.h"

USTRUCT(BlueprintType)
struct FYMetaItemUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText flavor_text;
    
    PROSPECT_API FYMetaItemUIData();
};

