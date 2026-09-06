#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YUpdateBodyPartRequestData.h"
#include "YControllerCharacterCustomizationTemporaryComponent.generated.h"

class UObject;
class UYControllerCharacterCustomizationTemporaryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerCharacterCustomizationTemporaryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerCharacterCustomizationTemporaryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestResetData();
    
    UFUNCTION(BlueprintCallable)
    void RequestCustomizationItemShow(const FYUpdateBodyPartRequestData& Data);
    
    UFUNCTION(BlueprintCallable)
    void RequestArchetypeIdPreview(FDataTableRowHandle archetypeRowHandle, const bool showDefaultArchetype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerCharacterCustomizationTemporaryComponent* FindControllerCharacterCustomizationTemporaryComponent(const UObject* objCtx);
    
};

