#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYPickupType.h"
#include "Templates/SubclassOf.h"
#include "YInventoryItem.h"
#include "YWidget_LootNotificationsContainer.generated.h"

class AController;
class AYPickupActor;
class UVerticalBox;
class UYWidget_LootNotification;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LootNotificationsContainer : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_notificationsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_LootNotification> m_lootNotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYPickupType> m_typesTriggeringNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_LootNotification*> m_lootNotificationWidgets;
    
    UYWidget_LootNotificationsContainer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeadlineVisibility();
    
    UFUNCTION(BlueprintCallable)
    void RemoveNotification(UYWidget_LootNotification* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnLootRewarded(AController* Instigator, const FYInventoryItem& rewardItem);
    
    UFUNCTION(BlueprintCallable)
    void OnLootCollected(AController* Instigator, AYPickupActor* pickup);
    
};

