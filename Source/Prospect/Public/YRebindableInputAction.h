#pragma once
#include "CoreMinimal.h"
#include "EYInputBindingCategory.h"
#include "EYInputKeyType.h"
#include "YDataTableRowBase.h"
#include "YRebindableInputAction.generated.h"

USTRUCT(BlueprintType)
struct FYRebindableInputAction : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInputKeyType m_keyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_axisNegativeInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRebindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInputBindingCategory m_inputBindingCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_keyBindingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_keyBindingTextAxisNegative;
    
    PROSPECT_API FYRebindableInputAction();
};

