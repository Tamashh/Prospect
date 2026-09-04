#pragma once
#include "CoreMinimal.h"
#include "YContractData.h"
#include "YContractUiData.generated.h"

USTRUCT(BlueprintType)
struct FYContractUiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYContractData m_contractData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_contractCanBeInteractedWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_contractIsLocked;
    
    PROSPECT_API FYContractUiData();
};

