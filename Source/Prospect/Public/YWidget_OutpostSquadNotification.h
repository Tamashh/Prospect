#pragma once
#include "CoreMinimal.h"
#include "YSquadInvite.h"
#include "YWidget.h"
#include "YWidget_OutpostSquadNotification.generated.h"

class UButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OutpostSquadNotification : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_messageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_acceptSquadInviteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_declineSquadInviteButton;
    
public:
    UYWidget_OutpostSquadNotification();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHandleDeclineSquadInviteClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHandleCloseClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnHandleAcceptSquadInviteClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateNotification(int32 notificationId, const FYSquadInvite& squadInvite, const FText& Message, bool isSquadInvite);
    
    UFUNCTION(BlueprintCallable)
    void CloseNotification();
    
    UFUNCTION(BlueprintCallable)
    bool BP_HandleBackKey_Implementation();
    
};

