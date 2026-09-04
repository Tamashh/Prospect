#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EYAlienForgeState.h"
#include "YAlienForgeProgressDescriptionState.h"
#include "YAlienForgeUIInventoryState.h"
#include "YAlienForge.generated.h"

class UYStateInventoryComponent;

UCLASS(Blueprintable)
class AYAlienForge : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnAlienForgeUIStateChangedSignature, const FYAlienForgeUIInventoryState&, alienForgeUIInventoryState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsValidRecipeChanged, bool, isValidRecipe);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAlienForgeStateChanged, EYAlienForgeState, alienForgeState);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAlienForgeStateChanged BP_OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnAlienForgeUIStateChangedSignature OnAlienForgeUIStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsValidRecipeChanged BP_OnIsValidRecipeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveStateChanged, meta=(AllowPrivateAccess=true))
    EYAlienForgeState m_activeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemMapping, meta=(AllowPrivateAccess=true))
    FYAlienForgeUIInventoryState m_itemMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsValidRecipeChanged, meta=(AllowPrivateAccess=true))
    bool m_isValidRecipeInForge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAlienForgeDebugMode;
    
    AYAlienForge(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TakeAllItemsFromTheAlienForgeNative(const UYStateInventoryComponent* interactingPlayerStateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void StartForgingNative();
    
    UFUNCTION(BlueprintCallable)
    void RecipeCheckCompleted(const FYAlienForgeProgressDescriptionState& alienForgeInputOutputData, const bool validRecipe);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemMapping() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsValidRecipeChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveStateChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TakeAllItemsFromTheAlienForge(const UYStateInventoryComponent* interactingPlayerStateInventoryComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartForging();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RecipeCheckCompleted(const bool validRecipe, const FYAlienForgeProgressDescriptionState& alienForgeInputOutputData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ActiveStateChanged(EYAlienForgeState State);
    
};

