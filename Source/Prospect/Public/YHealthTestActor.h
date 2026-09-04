#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YHealthTestActor.generated.h"

class UYDamageComponent;
class UYHealthComponent;

UCLASS(Blueprintable)
class AYHealthTestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYHealthComponent* m_healthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* m_damageableComponent;
    
public:
    AYHealthTestActor(const FObjectInitializer& ObjectInitializer);

};

