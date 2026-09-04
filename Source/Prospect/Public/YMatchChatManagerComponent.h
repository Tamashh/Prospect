#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YMatchChatManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYMatchChatManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerName, meta=(AllowPrivateAccess=true))
    FString m_serverName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnvironmentName, meta=(AllowPrivateAccess=true))
    FString m_currentEnvironmentName;
    
public:
    UYMatchChatManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnvironmentName();
    
};

