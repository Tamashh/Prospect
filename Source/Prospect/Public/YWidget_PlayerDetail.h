#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YReplicatedRankData.h"
#include "YWidget_PlayerDetail.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_PlayerDetail : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_rankTextBlock;
    
    UYWidget_PlayerDetail();

    UFUNCTION(BlueprintCallable)
    void OnPlayerRankInitialized(const FYReplicatedRankData& rankedData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotifyPlayerBound(const FString& PlayerId);
    
};

