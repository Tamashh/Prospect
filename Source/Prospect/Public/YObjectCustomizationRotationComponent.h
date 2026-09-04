#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YRotationObjectEntry.h"
#include "YObjectCustomizationRotationComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYObjectCustomizationRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRotationObjectEntry> m_sceneComponentsToRotate;
    
public:
    UYObjectCustomizationRotationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveComponentsToRotate(const TArray<USceneComponent*>& componentsToRotate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRotationReset();
    
    UFUNCTION(BlueprintCallable)
    void OnRotationChanged(const FVector2D& Rotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddComponentsToRotate(const TArray<USceneComponent*>& componentsToRotate);
    
};

