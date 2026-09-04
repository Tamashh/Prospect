#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YWidget_PlayerList.generated.h"

class AYPlayerState;
class UVerticalBox;
class UYWidget_PlayerDetail;
class UYWidget_SquadContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_PlayerList : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_SquadContainer> m_squadContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_playersOrSquadsVBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_PlayerDetail> m_playerDetailClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UYWidget_PlayerDetail*> m_players;
    
public:
    UYWidget_PlayerList();

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerEntry(AYPlayerState* PlayerState);
    
};

