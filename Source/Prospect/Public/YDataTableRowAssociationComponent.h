#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnRowHandleChangedDelegate.h"
#include "YDataTableRowAssociationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYDataTableRowAssociationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RowHandle, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRowHandleChanged OnRowHandleChanged;
    
    UYDataTableRowAssociationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRowHandle(FDataTableRowHandle rowHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RowHandle(FDataTableRowHandle oldRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetRowHandle();
    
};

