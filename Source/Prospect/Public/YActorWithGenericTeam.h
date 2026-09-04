#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "EYTeam.h"
#include "YActorWithGenericTeam.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYActorWithGenericTeam : public AActor, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    AYActorWithGenericTeam(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeamID(EYTeam TeamID);
    
    UFUNCTION(BlueprintCallable)
    static EYTeam GetTeamFromActor(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

