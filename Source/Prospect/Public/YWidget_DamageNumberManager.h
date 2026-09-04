#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"
#include "YDamageNumberData.h"
#include "YDamageNumberEntry.h"
#include "YDealtDamageData.h"
#include "YWidget_DamageNumberManager.generated.h"

class APawn;
class UCanvasPanel;
class UYWidget_DamageNumber;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_DamageNumberManager : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_DamageNumber> m_damageNumberClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDamageNumberEntry> m_damageNumberWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_damageNumberContainer;
    
    UYWidget_DamageNumberManager();

    UFUNCTION(BlueprintCallable)
    void OnXpAmountGained(FVector Location, int32 xp);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestNewDamageNumber(FYDamageNumberData Data);
    
    UFUNCTION(BlueprintCallable)
    void OnRemoveDamageNumber(UYWidget* Widget, ESlateVisibility newVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHitTarget(const FYDealtDamageData& Data);
    
};

