#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YScreenSystemRoot.generated.h"

class UYDialogContainerBase;
class UYHierarchicalStateMachine;
class UYLevelActorContainer;
class UYScreenCommand;
class UYScreenManager;
class UYWidget;
class UYWidgetManager;
class UYWidgetRootContainer;

UCLASS(Blueprintable)
class SCREENSYSTEM_API UYScreenSystemRoot : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnLevelActorContainerSet, UYLevelActorContainer*, LevelActorContainer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToggleEscMenuSignature, bool, forced);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FToggleChatInputSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnRequestInputForUmgSignature, UYWidget*, focusedWidget, const FString&, contextString, bool, isUmgHasInput, bool, uiOnly);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLevelActorContainerSet OnLevelActorContainerSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYWidgetManager* m_widgetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYScreenManager* m_screenManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYHierarchicalStateMachine* m_stateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidgetRootContainer* m_widgetRootContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDialogContainerBase* m_dialogContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYLevelActorContainer* m_levelActorContainer;
    
public:
    UYScreenSystemRoot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYWidgetRootContainer* GetWidgetContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYHierarchicalStateMachine* GetStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYLevelActorContainer* GetLevelActorContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYDialogContainerBase* GetDialogContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void DispatchScreenCommand(UYScreenCommand* screenCommand);
    
};

