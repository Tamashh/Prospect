#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_MatchRewards.generated.h"

class URichTextBlock;
class UTextBlock;
class UYWidget_CurrencyRewardsPanel;
class UYWidget_EomFactionProgressPanel;
class UYWidget_EomRewardsPanel;
class UYWidget_ProspectorLevel;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MatchRewards : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_EomFactionProgressPanel* m_factionProgressPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_EomRewardsPanel* m_matchResultsMaterialRewardsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_EomRewardsPanel* m_InMatchRewardsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_CurrencyRewardsPanel* m_currencyRewardsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ProspectorLevel* m_prospectorLevelRewardsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_noInMatchRewardsHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* m_headlineRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* m_sublineRichText;
    
    UYWidget_MatchRewards();

};

