#pragma once
#include "CoreMinimal.h"
#include "YGPAComponentTestActor.h"
#include "YPerkComponentTestActor.generated.h"

class UYDamageComponent;
class UYPerkComponent;

UCLASS(Blueprintable)
class AYPerkComponentTestActor : public AYGPAComponentTestActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPerkComponent* m_perkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* m_damageComponent;
    
public:
    AYPerkComponentTestActor(const FObjectInitializer& ObjectInitializer);

};

