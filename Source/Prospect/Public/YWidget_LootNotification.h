#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYItemRarityType.h"
#include "YWidget_LootNotification.generated.h"

class UBorder;
class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LootNotification : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_amountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* m_rarityImageBorders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_itemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_notificationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_itemImageSizeY;
    
    UYWidget_LootNotification();

private:
    UFUNCTION(BlueprintCallable)
    void RemoveNotification();
    
    UFUNCTION(BlueprintCallable)
    void OnIconLoaded(TSoftObjectPtr<UTexture2D> Icon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRemovedFromContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAmountUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAddedToContainer(EYItemRarityType itemRarity, const FColor& rarityColor, const FDataTableRowHandle& Sound);
    
};

