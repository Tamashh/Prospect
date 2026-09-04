#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "YGASAttributeSet.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYGASAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData m_health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Poison, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData m_poison;
    
    UYGASAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_Poison(const FGameplayAttributeData& PrevValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health(const FGameplayAttributeData& PrevValue);
    
};

