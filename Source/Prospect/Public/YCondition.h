#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YCondition.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class PROSPECT_API UYCondition : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_invert;
    
public:
    UYCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateInternal(const UObject* Context) const;
    
};

