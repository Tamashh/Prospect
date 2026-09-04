#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYActorStorageIntention.h"
#include "EYCustomizationMode.h"
#include "YCustomizationModeAssociation.h"
#include "YOnCustomizationModeActorStateChangedDelegate.h"
#include "YGameStateCustomizationComponent.generated.h"

class AActor;
class UObject;
class UYGameStateCustomizationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYGameStateCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomizationModeActorStateChanged OnCustomizationModeActorChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYCustomizationMode, FYCustomizationModeAssociation> m_customizationModeToActors;
    
public:
    UYGameStateCustomizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void HandleActorRegistrationForCustomizationMode(const UObject* objCtx, EYCustomizationMode Mode, AActor* Actor, EYActorStorageIntention intention);
    
    UFUNCTION(BlueprintCallable)
    static UYGameStateCustomizationComponent* FindGameStateCustomizationComponentChecked(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static UYGameStateCustomizationComponent* FindGameStateCustomizationComponent(const UObject* objCtx);
    
};

