#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OnYButtonClickedEventDelegate.h"
#include "YButton.generated.h"

class USlateWidgetStyleAsset;

UCLASS(Blueprintable)
class UYButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnYButtonClickedEvent OnYClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_buttonStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_buttonIsSelectedStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_biButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_biLocationName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_currentlyUsedStyleAsset;
    
public:
    UYButton();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectionState(bool NewIsSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonStyleAsset(USlateWidgetStyleAsset* NewStyle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleReleased();
    
    UFUNCTION(BlueprintCallable)
    void HandlePressed();
    
    UFUNCTION(BlueprintCallable)
    void HandleHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

