#pragma once
#include "CoreMinimal.h"
#include "YInventoryLink.generated.h"

class UYStateInventoryComponent;

USTRUCT(BlueprintType)
struct FYInventoryLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStateInventoryComponent* m_inventoryComponent;
    
    PROSPECT_API FYInventoryLink();
};

