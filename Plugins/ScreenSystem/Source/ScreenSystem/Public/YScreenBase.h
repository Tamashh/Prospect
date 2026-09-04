#pragma once
#include "CoreMinimal.h"
#include "YHierarchicalStateBase.h"
#include "EYScreenType.h"
#include "Templates/SubclassOf.h"
#include "YScreenBase.generated.h"

class AHUD;
class UYScreenBase;
class UYScreenSystemRoot;
class UYWidget;

UCLASS(Blueprintable)
class SCREENSYSTEM_API UYScreenBase : public UYHierarchicalStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget> m_screenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget> m_alternativeWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget* m_screenWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYScreenSystemRoot* m_screenSystemRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSubScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearWidgetOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYScreenType m_screenType;
    
public:
    UYScreenBase();

    UFUNCTION(BlueprintCallable)
    void RequestScreenPop();
    
    UFUNCTION(BlueprintCallable)
    void RequestScreenChange(TSubclassOf<UYScreenBase> nextScreen, bool emptyScreenStack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHUD* GetHUD() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetLoaded();
    
};

