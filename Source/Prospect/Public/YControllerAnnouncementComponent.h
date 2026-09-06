#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "OnAnnouncementStartedDelegate.h"
#include "OnAnnouncementStoppedDelegate.h"
#include "YAnnouncementPlayEntryData.h"
#include "YAnnouncementRequestAysncLoadData.h"
#include "YControllerAnnouncementComponent.generated.h"

class UAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerAnnouncementComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FTimerHandle> m_announcementPlayingTimeoutHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAudioComponent*> m_audioAnnouncementComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_soundBusAnnouncementComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementStarted BP_OnAnnouncementStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnnouncementStopped BP_OnAnnouncementStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYAnnouncementPlayEntryData> m_currentAnnouncementPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAnnouncementPlayEntryData> m_queuedAnnouncements;
    
    UYControllerAnnouncementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static int32 RetrieveCategoryPriority(const FDataTableRowHandle& categoryRowHandle);

    UFUNCTION(BlueprintCallable)
    static int32 RetrieveAnnouncementPriority(const FDataTableRowHandle& rowHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadedAudio(const TArray<FSoftObjectPath> LoadedObjects, FYAnnouncementRequestAysncLoadData Data, float timestampStartedLoad);
    
    UFUNCTION(BlueprintCallable)
    void OnAnnouncementFinishedRegularly(const FString& speakerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAnnouncementPlaying();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHighestPriority();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYAnnouncementPlayEntryData GetCurrentAnnouncementPlayingForSpeaker(const FString& speakerId);
    
    UFUNCTION(BlueprintCallable)
    static bool AllowedToQueueAnnouncement(const FDataTableRowHandle& rowHandle);
    
};

