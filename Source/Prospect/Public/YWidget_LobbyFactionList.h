#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_LobbyFactionList.generated.h"

class APlayerState;
class UHorizontalBox;
class UYWidget_LobbyFactionDetail;
class UYWidget_LobbyFactionList;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LobbyFactionList : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFactionSelected, const FName&, factionId, UYWidget_LobbyFactionList*, factionListSource);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFactionSelected OnFactionSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_factionsContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UYWidget_LobbyFactionDetail*> m_factionsWidgets;
    
public:
    UYWidget_LobbyFactionList();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelectedFactionChangedCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void HandleFactionSelected(const FName& factionId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_LobbyFactionDetail* BP_CreateFactionDetail();
    
};

