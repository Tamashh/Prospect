#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YInventoryLink.h"
#include "YInventoryComponentManager.generated.h"

class UObject;
class UYInventoryComponentManager;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYInventoryComponentManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYInventoryLink> m_inventoryComponents;
    
public:
    UYInventoryComponentManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnRepInventoryComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYInventoryLink> GetInventoryLinks() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYInventoryComponentManager* GetInventoryComponentManager(const UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    UYStateInventoryComponent* GetInventoryComponentForId(int32 ID, const FString& Context);
    
};

