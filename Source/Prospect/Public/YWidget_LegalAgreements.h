#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_LegalAgreements.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LegalAgreements : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLegalAgreementsAcceptedDelegate, bool, IsAccepted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLegalAgreementsAnimatedOutDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLegalAgreementsAcceptedDelegate OnLegalAgreementsAcceptedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegalAgreementsAnimatedOutDelegate OnLegalAgreementsAnimatedOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateOut;
    
public:
    UYWidget_LegalAgreements();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLegalAgreementsAnimationFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void LeaveGame();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeclineLegalAgreements();
    
private:
    UFUNCTION(BlueprintCallable)
    void Continue();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_AnimateOut();
    
    UFUNCTION(BlueprintCallable)
    void AnimateOut();
    
    UFUNCTION(BlueprintCallable)
    void AcceptLegalAgreements();
    
};

