#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YAIEQSTargetDummy.generated.h"

class AYAIEQSTestingPawn;

UCLASS(Blueprintable)
class PROSPECT_API AYAIEQSTargetDummy : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYAIEQSTestingPawn* m_associatedEqsTestingPawn;
    
public:
    AYAIEQSTargetDummy(const FObjectInitializer& ObjectInitializer);

};

