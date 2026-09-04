#pragma once
#include "CoreMinimal.h"
#include "EYSortingMethod.h"
#include "YDataTableRowBase.h"
#include "YItemSortingLayer.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYItemSortingLayer : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_sortingMethodDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYSortingMethod> m_sortingMethods;
    
    FYItemSortingLayer();
};

