#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YHighlightAssociationEntry.h"
#include "YSecondEntry.h"
#include "YControllerAssociationComponent.generated.h"

class AActor;
class UYControllerAssociationComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerAssociationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HighlightComponentActive, meta=(AllowPrivateAccess=true))
    TArray<FYHighlightAssociationEntry> m_associations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FYSecondEntry> m_nonReplicatedState;
    
public:
    UYControllerAssociationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static FGuid StartAssociationHighlightWithData(AActor* actorContext, const FYHighlightAssociationEntry& entry);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveHighlightGuid(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerHighlightData(FYHighlightAssociationEntry Data);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool RemoveHighlightGuid(AActor* actorContext, FGuid Guid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HighlightComponentActive(TArray<FYHighlightAssociationEntry> oldEntries);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(UYStateInventoryComponent* inventoryComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerAssociationComponent* FindControllerAssociationComponent(AActor* actorContext);
    
};

