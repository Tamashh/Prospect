#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYInputUIStackType.h"
#include "OnInputModeChangedDelegate.h"
#include "OnInputStackChangedDataDelegate.h"
#include "OnInputStackTypeChangedDelegate.h"
#include "YInputStackRuntimeContext.h"
#include "YInputWidget.h"
#include "YRegisteredStackInput.h"
#include "YPlayerInputStackComponent.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerInputStackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputStackTypeChanged OnStackTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputStackChangedData OnStackDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputModeChanged OnInputModeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInputWidget> m_inputWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRegisteredStackInput> m_stackInput;
    
public:
    UYPlayerInputStackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool RemoveInputWidget(UObject* objectContext, UWidget* widgetToDeactivate, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveHighestInputStack(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterNewStackContext(UObject* objectContext, EYInputUIStackType stackType, const FYInputStackRuntimeContext& StackContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStackRowHighestActive(UObject* objectContext, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStackRowActive(UObject* objectContext, const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStackInputActive(UObject* objectContext, EYInputUIStackType stackType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHighestStackActive(UObject* objectContext, EYInputUIStackType stack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyStackActive(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearAllStacks(UObject* objectContext);
    
};

