#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerItemHoverComponent.generated.h"

class AActor;
class UYControllerItemHoverComponent;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerItemHoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_currentHoveredItemContainer;
    
    UYControllerItemHoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHoveredItemContainer(UYWidget_ItemContainer* newItemContainer);
    
    UFUNCTION(BlueprintCallable)
    static UYControllerItemHoverComponent* FindHoverItemComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    void ClearHoveredItemContainer(UYWidget_ItemContainer* oldItemContainer);
    
};

