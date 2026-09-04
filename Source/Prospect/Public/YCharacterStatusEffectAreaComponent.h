#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YCharacterStatusEffectAreaComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterStatusEffectAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYCharacterStatusEffectAreaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LeftStatusEffectArea(FDataTableRowHandle statusEffectRowHandle, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EnteredStatusEffectArea(FDataTableRowHandle statusEffectRowHandle, AActor* Actor);
    
};

