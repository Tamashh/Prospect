#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "YDefaultKitDataAsset.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYDefaultKitDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useDefaultKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_DefaultKit;
    
    UYDefaultKitDataAsset();

};

