#include "YGameplayAttributesComponent.h"
#include "Net/UnrealNetwork.h"

UYGameplayAttributesComponent::UYGameplayAttributesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYGameplayAttributesComponent::RemoveAttributeModifierById(FGuid Guid) {
}

void UYGameplayAttributesComponent::RemoveAttributeModifier(FGuid Guid, EYGPAModifierType modifierType) {
}

void UYGameplayAttributesComponent::RemoveAllModifiersByAttribute(EYGameplayAttribute Attribute) {
}

void UYGameplayAttributesComponent::OnRep_ActivePreAddModifiers() {
}

void UYGameplayAttributesComponent::OnRep_ActivePostAddModifiers() {
}

void UYGameplayAttributesComponent::OnRep_ActiveOverrideModifiers() {
}

void UYGameplayAttributesComponent::OnRep_ActiveAddModifiers() {
}

void UYGameplayAttributesComponent::LogGameplayAttrbutes(AActor* Actor) {
}

void UYGameplayAttributesComponent::LogAllGameplayAttrbutes() {
}

bool UYGameplayAttributesComponent::IsAnyModifierOfAttributeTypeActiveStatic(AActor* actorContext, EYGameplayAttribute Attribute, EYGameplayContextType contextType) {
    return false;
}

bool UYGameplayAttributesComponent::IsAnyModifierOfAttributeTypeActive(EYGameplayAttribute Attribute, EYGameplayContextType contextType) {
    return false;
}

int32 UYGameplayAttributesComponent::GetModifiedGameplayAttributeInteger(AActor* actorContext, EYGameplayAttribute Attribute, int32 baseValue, EYGameplayContextType contextType) {
    return 0;
}

float UYGameplayAttributesComponent::GetModifiedGameplayAttribute(AActor* actorContext, EYGameplayAttribute Attribute, float baseValue, EYGameplayContextType contextType) {
    return 0.0f;
}

FGuid UYGameplayAttributesComponent::AddAttributeModifierWithContext(const FYGameplayAttributeModifier& attributeModifier, EYGameplayContextType Context) {
    return FGuid{};
}

FGuid UYGameplayAttributesComponent::AddAttributeModifier(const FYGameplayAttributeModifier& attributeModifier) {
    return FGuid{};
}

void UYGameplayAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYGameplayAttributesComponent, m_activeOverrideModifiers);
    DOREPLIFETIME(UYGameplayAttributesComponent, m_activePreAddModifiers);
    DOREPLIFETIME(UYGameplayAttributesComponent, m_activeAddModifiers);
    DOREPLIFETIME(UYGameplayAttributesComponent, m_activePostAddModifiers);
}


