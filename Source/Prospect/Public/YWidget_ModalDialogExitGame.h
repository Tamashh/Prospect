#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_ModalDialogExitGame.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ModalDialogExitGame : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeaveGame);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGiveFeedback);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_giveFeedbackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_leaveGameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_backToGameButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateOut;
    
public:
    UYWidget_ModalDialogExitGame();

    UFUNCTION(BlueprintCallable)
    void OnLeaveGameButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnGiveFeedbackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnBackToGameButtonClicked();
    
};

