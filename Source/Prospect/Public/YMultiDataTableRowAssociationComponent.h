#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnMultiRowHandleChangedDelegate.h"
#include "YMultiDataTableRowAssociationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYMultiDataTableRowAssociationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RowHandle, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_rowHandles;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiRowHandleChanged OnRowHandleChanged;
    
    UYMultiDataTableRowAssociationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRowHandles(const TArray<FDataTableRowHandle>& rowHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RowHandle(const TArray<FDataTableRowHandle>& oldRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetRowHandles();
    
};

