#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YBattleEyeMessageSendingStatsData.h"
#include "YBattleEyeReplicatedMessageEntry.h"
#include "YPlayerBattleEyePlayerInformation.h"
#include "YBattleEyeControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class YBATTLEEYE_API UYBattleEyeControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBattleEyeMessageSendingStatsData m_messageStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isReadyInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clientReadyInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerBattleEyePlayerInformation m_cachedPlayerInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastEmptyBattleyeQueueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastEmptyNetworkMessageQueueTime;
    
public:
    UYBattleEyeControllerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReceivePackageFromClient(const FYBattleEyeReplicatedMessageEntry& Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReadyInitialize(bool Initialize);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAckPackageFromClient(FGuid pendingMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceivePackageFromServer(const FYBattleEyeReplicatedMessageEntry& Data);
    
};

