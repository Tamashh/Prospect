#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYCustomizationModelType.h"
#include "YActiveCustomizationData.h"
#include "YOnNewActiveCustomizationDataDelegate.h"
#include "YUpdateBodyPartRequestData.h"
#include "YControllerCharacterCustomizationPersistentComponent.generated.h"

class UObject;
class UYControllerCharacterCustomizationPersistentComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerCharacterCustomizationPersistentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnNewActiveCustomizationData OnNewCustomizationDataDelegate;
    
    UYControllerCharacterCustomizationPersistentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TravelToStation();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestSetPersistentCharacterData(const FYCharacterVanity& newData);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestSetArchetypeIdForFirstCharacterSelection(FDataTableRowHandle archetypeRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void RequestConfirmCharacterCustomization();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateCustomizationDataChanged(FYActiveCustomizationData oldData, FYActiveCustomizationData newData, bool ForceRefresh);
    
    UFUNCTION(BlueprintCallable)
    void OnModelCharacterVanityDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationModelDataChanged(EYCustomizationModelType Type);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCustomization();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerCharacterCustomizationPersistentComponent* FindControllerCharacterCustomizationPersistentComponent(const UObject* objCtx);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DebugServerRequestCustomizationItemEquipped(const FYUpdateBodyPartRequestData& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugRequestCustomizationItemEquipped(const FYUpdateBodyPartRequestData& Data);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnModelCharacterVanityDataChanged(const TArray<FYCharacterVanity>& characterVanityData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CalculateActiveCustomizationData(FYActiveCustomizationData& outData, EYCustomizationModelType modelType) const;
    
};

