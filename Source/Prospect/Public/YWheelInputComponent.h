#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnWheelCloseRequestDelegate.h"
#include "OnWheelOpenRequestDelegate.h"
#include "OnWheelTriggerAndCloseRequestDelegate.h"
#include "YWheelInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYWheelInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWheelOpenRequest BP_OnWheelOpenRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWheelCloseRequest BP_OnWheelCloseRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWheelTriggerAndCloseRequest BP_OnWheelTriggerAndCloseRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_selectedRowHandle;
    
    UYWheelInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartVanityInput();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartMouseMoveCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseVanityInput();
    
    UFUNCTION(BlueprintCallable)
    void OnVanityUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredInventoryState();
    
};

