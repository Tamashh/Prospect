#pragma once
#include "CoreMinimal.h"
#include "YBackendFreeLoadout.h"
#include "YTimestamp.h"
#include "Components/ActorComponent.h"
#include "YOnFreeLoadoutActivatedSignatureDelegate.h"
#include "YOnFreeLoadoutFilterSelectionSignatureDelegate.h"
#include "YOnFreeLoadoutInfoUpdatedSignatureDelegate.h"
#include "YStateFreeLoadoutComponent.generated.h"

class AActor;
class UYStateFreeLoadoutComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYStateFreeLoadoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFreeLoadoutActivatedSignature OnFreeLoadoutActivated;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFreeLoadoutInfoUpdatedSignature OnFreeLoadoutInfoUpdated;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFreeLoadoutFilterSelectionSignature OnFreeLoadoutFilterSelectionUpdated;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFreeLoadoutFilterSelected;

    UYStateFreeLoadoutComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateAvailableFreeLoadout(int32 newRandomSeed, const FYTimestamp& loadoutExpirationTimeSecondsUtc);

public:
    UFUNCTION(BlueprintCallable)
    void SetFreeLoadoutInfo(const FYBackendFreeLoadout& freeLoadoutBackendData);

    UFUNCTION(BlueprintCallable)
    void OnSetFreeLoadoutFilterSelection(bool IsSelected);

private:
    UFUNCTION(BlueprintCallable)
    void OnRefreshTimerElapsed();

    UFUNCTION(BlueprintCallable)
    void HandleFreeLoadoutActivated(bool IsActive);

public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYStateFreeLoadoutComponent* FindStateFreeLoadoutComponent(AActor* actorContext);

};
