#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "OnSocialActorUsedDelegate.h"
#include "Templates/SubclassOf.h"
#include "YPlayerSocialComponent.generated.h"

class AYSocialActor;
class UYMapMarkerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerSocialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_socialActorCommWheelEntry_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_socialActorCommWheelEntry_Enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_socialActorCommWheelEntry_Acknowledge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_socialActorCommWheelEntry_CancelPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_socialActorPingableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSocialActorUsed OnSocialActorUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AYSocialActor> m_socialActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AYSocialActor*> m_socialActorsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AYSocialActor*> m_acknowledgedSocalActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_traceChannel;
    
    UYPlayerSocialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSocialInput();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerHandlePingSocialActor(AYSocialActor* socialActor);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDoSocialAction(FVector_NetQuantize traceLocation, FVector traceDirection, FDataTableRowHandle commWheelEntry);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDoMapSocialAction(UYMapMarkerData* mapMarkerData);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSocialInput_GoThere();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSocialInput_Enemies();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSocialInput();
    
    UFUNCTION(BlueprintCallable)
    void OnQuickMatchInfoToggled(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSingleClickTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void DoSocialActionWithTraceInfo(FVector traceLocation, FVector traceDirection, FDataTableRowHandle commWheelEntry);
    
    UFUNCTION(BlueprintCallable)
    void DoMapSocialAction(UYMapMarkerData* mapMarkerData);
    
};

