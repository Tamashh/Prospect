#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YActiveCustomizationData.h"
#include "YCharacterCustomizationComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnMeshInitialized);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMeshInitialized OnMeshInitializedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> m_meshComponents;
    
    UYCharacterCustomizationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadedAssets();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationDataAvailable(FYActiveCustomizationData requestedBodyType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThirdPersonMeshInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool IsMeshInitialized();
    
};

