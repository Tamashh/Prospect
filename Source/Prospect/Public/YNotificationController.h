#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YNotificationDescription.h"
#include "YNotificationController.generated.h"

UCLASS(Blueprintable)
class UYNotificationController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_frequency;
    
    UYNotificationController();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FYNotificationDescription PreprocessDescription(const FYNotificationDescription& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool BP_ShouldShowNotification(const FYNotificationDescription& Description);
    
};

