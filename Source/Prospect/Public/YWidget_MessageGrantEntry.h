#pragma once
#include "CoreMinimal.h"
#include "EYGrantType.h"
#include "YGrant.h"
#include "YWidget.h"
#include "YWidget_MessageGrantEntry.generated.h"

class UButton;
class UTextBlock;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MessageGrantEntry : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_claimButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_claimButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_claimErrorText;
    
public:
    UYWidget_MessageGrantEntry();

private:
    UFUNCTION(BlueprintCallable)
    void OnGrantsUpdated(const TArray<FYGrant>& grants);
    
    UFUNCTION(BlueprintCallable)
    void HandleGrantsClaimed(const TArray<FYGrant>& grantIds);
    
    UFUNCTION(BlueprintCallable)
    void HandleGrantClaimFailed(const FYGrant& grantId);
    
    UFUNCTION(BlueprintCallable)
    void HandleClaimButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GrantsClaimed(bool wasSuccessful);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddEntryWidget(EYGrantType grantType);
    
};

