#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "YOnCanSeeSeasonPopupDelegate.h"
#include "YPlayerStateBase.generated.h"

class UYPlatformAnalyticsComponent;
class UYPlayerBIDataComponent;
class UYPlayerEOSStatsComponent;
class UYStateFreeLoadoutComponent;
class UYStateInventoryComponent;
class UYStateQuestComponent;

UCLASS(Blueprintable, Config=Engine)
class PROSPECT_API AYPlayerStateBase : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCanSeeSeasonPopup OnCanSeeSeasonPopupStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerBIDataComponent* m_playerBIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlatformAnalyticsComponent* m_platformAnalyticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStateInventoryComponent* m_stateInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStateQuestComponent* m_stateQuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStateFreeLoadoutComponent* m_stateFreeLoadoutComponent;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerEOSStatsComponent* m_playerEOSStatsComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_seeSeasonRewardPopup;
    
public:
    AYPlayerStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCanSeeSeasonRewardPopUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPlayerEOSStatsComponent* GetPlayerEOSStatsComponent() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanSeeSeasonRewardPopUp() const;
    
};

