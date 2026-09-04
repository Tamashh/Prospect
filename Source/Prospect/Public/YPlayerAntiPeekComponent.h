#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYMeshViewState.h"
#include "YPlayerAntiPeekComponent.generated.h"

class AYCharacter;
class AYPlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerAntiPeekComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_playerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYCharacter*> m_processedCharacters;
    
public:
    UYPlayerAntiPeekComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnMeshViewStateChanged(EYMeshViewState newViewState);
    
};

