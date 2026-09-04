#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "YImpactActorSpawnInterface.h"
#include "YAbilityActor.generated.h"

UCLASS(Blueprintable)
class AYAbilityActor : public AActor, public IYImpactActorSpawnInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_spawnedRowHandle;
    
    AYAbilityActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

