#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YInventoryItem.h"
#include "YInsurancePayoutPackage.generated.h"

USTRUCT(BlueprintType)
struct FYInsurancePayoutPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_processingSeenByUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_seenByUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_softCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_atLeastOneVoidedByOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_atLeastOneVoidedBySquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_unlockTimeUtc;
    
    PROSPECT_API FYInsurancePayoutPackage();
};

