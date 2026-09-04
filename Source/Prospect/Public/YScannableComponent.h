#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnWasScannedDelegate.h"
#include "YScannableRow.h"
#include "YScannableComponent.generated.h"

class AActor;
class UYHealthComponent;
class UYScannableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYScannableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWasScanned OnWasScanned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_dataTableHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoDeactivateOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_isScannable;
    
public:
    UYScannableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScannableRowHandle(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetIsScannable(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthEmpty(UYHealthComponent* healthComponent, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScannableDataBP(FYScannableRow& dataRow);
    
    UFUNCTION(BlueprintCallable)
    static UYScannableComponent* CreateScannableComponent(AActor* Owner, FDataTableRowHandle dataRowHandle);
    
};

