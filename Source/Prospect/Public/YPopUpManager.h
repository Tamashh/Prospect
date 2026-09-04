#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGetErrorHandling.h"
#include "YPopUpManager.generated.h"

class UYDismissedPopups;
class UYPopUpManager;

UCLASS(Blueprintable)
class UYPopUpManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_sessionPopUpIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYDismissedPopups* m_dismissedPopups;
    
public:
    UYPopUpManager();

    UFUNCTION(BlueprintCallable)
    void OnPopUpWidgetDismissed(const FName& popUpId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingPopUpWidgets();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYPopUpManager* Get(const UObject* WorldContext, EYGetErrorHandling errorHandling);
    
};

