#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YProspectorLevelData.h"
#include "YWidget_PlayerProfile.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_PlayerProfile : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_PlayerProfile();

private:
    UFUNCTION(BlueprintCallable)
    void OnProspectorLevelCalculated(const FYProspectorLevelData& playerProfileData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPlayerName(const FText& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSocialProfileUpdated(const FYProspectorLevelData& playerProfileData);
    
};

