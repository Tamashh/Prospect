#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYGPAModifierType.h"
#include "EYGameplayAttribute.h"
#include "EYGameplayContextType.h"
#include "YGameplayAttributeModifier.h"
#include "YGameplayAttributesComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYGameplayAttributesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGPAModifierReplicatedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGPAModifierChangedSignature, EYGameplayAttribute, Attribute, bool, added, const FGuid&, Guid);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGPAChangedSignature, EYGameplayAttribute, Attribute, float, oldAttributeValue, float, newAttributeValue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGPAChangedSignature GPAChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGPAModifierChangedSignature GPAModifierChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGPAModifierReplicatedSignature GPAModifierReplicatedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveOverrideModifiers, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_activeOverrideModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActivePreAddModifiers, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_activePreAddModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveAddModifiers, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_activeAddModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActivePostAddModifiers, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_activePostAddModifiers;
    
public:
    UYGameplayAttributesComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveAttributeModifierById(FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttributeModifier(FGuid Guid, EYGPAModifierType modifierType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllModifiersByAttribute(EYGameplayAttribute Attribute);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActivePreAddModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActivePostAddModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveOverrideModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveAddModifiers();
    
public:
    UFUNCTION(BlueprintCallable)
    static void LogGameplayAttrbutes(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void LogAllGameplayAttrbutes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyModifierOfAttributeTypeActiveStatic(AActor* actorContext, EYGameplayAttribute Attribute, EYGameplayContextType contextType);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyModifierOfAttributeTypeActive(EYGameplayAttribute Attribute, EYGameplayContextType contextType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetModifiedGameplayAttributeInteger(AActor* actorContext, EYGameplayAttribute Attribute, int32 baseValue, EYGameplayContextType contextType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetModifiedGameplayAttribute(AActor* actorContext, EYGameplayAttribute Attribute, float baseValue, EYGameplayContextType contextType);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddAttributeModifierWithContext(const FYGameplayAttributeModifier& attributeModifier, EYGameplayContextType Context);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddAttributeModifier(const FYGameplayAttributeModifier& attributeModifier);
    
};

