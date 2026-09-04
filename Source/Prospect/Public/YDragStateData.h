#pragma once
#include "CoreMinimal.h"
#include "YDragStateData.generated.h"

class UDragDropOperation;

USTRUCT(BlueprintType)
struct FYDragStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragDropOperation* m_operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_state;
    
    PROSPECT_API FYDragStateData();
};

