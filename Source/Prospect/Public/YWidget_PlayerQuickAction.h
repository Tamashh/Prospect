#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYQuickActionClick.h"
#include "YWidget_PlayerQuickAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_PlayerQuickAction : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_relatedUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYQuickActionClick m_action;
    
    UYWidget_PlayerQuickAction();

    UFUNCTION(BlueprintCallable)
    void OnFriendListUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedAction(const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAction(const FString& uid, const FString& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RefreshState();
    
};

