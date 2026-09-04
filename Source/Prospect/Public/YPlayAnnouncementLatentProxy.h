#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/DataTable.h"
#include "OnAnnouncementUpdatedDelegate.h"
#include "YAnnouncementPlayEntryData.h"
#include "YAnnouncementPlaybackOptions.h"
#include "YVOAudioDatatableRow.h"
#include "YVOLine.h"
#include "YPlayAnnouncementLatentProxy.generated.h"

class AActor;
class UYPlayAnnouncementLatentProxy;

UCLASS(Blueprintable)
class PROSPECT_API UYPlayAnnouncementLatentProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementUpdated OnStartFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementUpdated OnStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementUpdated OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementUpdated OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementUpdated OnChainCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnnouncementPlaybackOptions m_playbackOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_chain;
    
public:
    UYPlayAnnouncementLatentProxy();

    UFUNCTION(BlueprintCallable)
    static UYPlayAnnouncementLatentProxy* PlayAnnouncementLatent(AActor* playerContextActor, FDataTableRowHandle voRowHandle, FYAnnouncementPlaybackOptions Options);
    
    UFUNCTION(BlueprintCallable)
    void OnAnnouncementStopped(FYAnnouncementPlayEntryData voicelineData, bool cancelled);
    
    UFUNCTION(BlueprintCallable)
    void OnAnnouncementStarted(FYVOAudioDatatableRow voicelineData, FYAnnouncementPlaybackOptions playbackOptions, const FYVOLine& voiceLine);
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetChainStart();
    
};

