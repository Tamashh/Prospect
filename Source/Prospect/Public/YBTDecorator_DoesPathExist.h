#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h"
#include "YBTDecorator_DoesPathExist.generated.h"

UCLASS(Blueprintable)
class UYBTDecorator_DoesPathExist : public UBTDecorator_DoesPathExist {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxPathLength;
    
public:
    UYBTDecorator_DoesPathExist();

};

