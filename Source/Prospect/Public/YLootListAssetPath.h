#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YLootListAssetPath.generated.h"

USTRUCT(BlueprintType)
struct FYLootListAssetPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_gameModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_listDefinitionsDTAssetPath;
    
    PROSPECT_API FYLootListAssetPath();
};

