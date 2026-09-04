#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnRowLoadedDelegate.h"
#include "YAssetVariationComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAssetVariationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRowLoaded BP_OnRowLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_loadedAssets;
    
public:
    UYAssetVariationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnRowLoaded(FDataTableRowHandle rowHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadRowAsync(FDataTableRowHandle rowHandle);
    
};

