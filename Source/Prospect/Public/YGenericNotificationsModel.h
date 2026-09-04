#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYNotificationsCategory.h"
#include "YNotificationDescription.h"
#include "YGenericNotificationsModel.generated.h"

class UYGenericNotificationsModel;

UCLASS(Blueprintable, Config=GameUserSettings)
class UYGenericNotificationsModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EYNotificationsCategory> m_silentNotificationCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNotificationDescription> m_notifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNotificationDescription> m_accountNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_shownNotificationsIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_shownAccountNotificationsIds;
    
public:
    UYGenericNotificationsModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<EYNotificationsCategory> GetSilentNotificationCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYNotificationDescription> GetNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYNotificationDescription> GetAccountNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYGenericNotificationsModel* FindGenericNotificationsModel(const UObject* objCtx);
    
};

