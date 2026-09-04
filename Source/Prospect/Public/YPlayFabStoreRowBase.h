#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYGamePlatform.h"
#include "EYPlayFabStoreCategory.h"
#include "YPlayFabStoreRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabStoreRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGamePlatform m_platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayFabStoreCategory m_storeCategory;
    
    PROSPECT_API FYPlayFabStoreRowBase();
};

