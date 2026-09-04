#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerInventory.h"
#include "YControllerInventoryInteractionComponent.generated.h"

class AActor;
class UYControllerInventoryInteractionComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerInventoryInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryClosed, UYControllerInventoryInteractionComponent*, controllerInventoryInteractionComponent);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_interactingActorContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYStateInventoryComponent* m_interactingInventoryComponent;
    
public:
    UYControllerInventoryInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SetPlayerInventory(const FYPlayerInventory& Inventory) const;
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryStateDeactivatedCallback(bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidInventoryInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYPlayerInventory GetPlayerInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYStateInventoryComponent* GetInteractingStateInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractingActorContext() const;
    
};

