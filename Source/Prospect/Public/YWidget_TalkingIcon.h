#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_TalkingIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_TalkingIcon : public UYWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_isTalking;
    
public:
    UYWidget_TalkingIcon();

    UFUNCTION(BlueprintCallable)
    void SetupFromData(const FString& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTalking(bool NewIsTalking);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEmptyState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnParticipantUpdated(const FString& PlayerId, const bool NewIsTalking);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTalking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetTalking(const bool NewIsTalking);
    
};

