#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YActorWidgetSimple.h"
#include "YSocialActorWidget.generated.h"

class AYSocialActor;

UCLASS(Blueprintable, EditInlineNew)
class UYSocialActorWidget : public UYActorWidgetSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYSocialActor* m_socialActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSocialActorFromLocalOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSocialActorFromTeam;
    
public:
    UYSocialActorWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetPlayerTeamColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostSetWidgetData();
    
};

