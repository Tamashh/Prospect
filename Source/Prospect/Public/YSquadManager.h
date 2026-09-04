#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAzureFunctionResult.h"
#include "YOutpostFriendInfo.h"
#include "YSquadLeftSignatureDelegate.h"
#include "YSquadUpdateSignatureDelegate.h"
#include "YSquadManager.generated.h"

class UYSquadManager;

UCLASS(Blueprintable)
class UYSquadManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSquadUpdateSignature OnSquadInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSquadLeftSignature OnSquadMemberLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxNumOfSquadmates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYOutpostFriendInfo> m_otherSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_squadInviteTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldSendNewInvites;
    
public:
    UYSquadManager();

    UFUNCTION(BlueprintCallable)
    void ProcessSquadInviteQueue();
    
    UFUNCTION(BlueprintCallable)
    void OnSocialEntriesUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSendSquadInviteResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestLeaveSquadModalConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnReadyForMatchResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveSquadResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGetSquadMembersResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGetCompleteSquadInfoResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptSquadInviteResponse(const FYAzureFunctionResult& azureResult);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYSquadManager* GetInstance(const UObject* WorldContext);
    
};

