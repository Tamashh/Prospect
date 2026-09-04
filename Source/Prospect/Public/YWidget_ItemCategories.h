#pragma once
#include "CoreMinimal.h"
#include "EYDeviceClass.h"
#include "EYItemType.h"
#include "EYMiscellaneousType.h"
#include "EYVanityType.h"
#include "YWidget.h"
#include "YWidget_ItemCategories.generated.h"

class UYWidget_ItemCategoryEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemCategories : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCategorySelectedSignature, EYItemType, Category, EYDeviceClass, deviceClass, EYMiscellaneousType, Type, EYVanityType, vanityCategory);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYVanityType> m_supportedVanityClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYMiscellaneousType> m_supportedMiscClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYDeviceClass> m_supportedDeviceClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_supportedItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_selectedItemCategory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UYWidget_ItemCategoryEntry*, EYDeviceClass> m_categoryEntryToDeviceClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYDeviceClass, UYWidget_ItemCategoryEntry*> m_deviceClassToCategoryEntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UYWidget_ItemCategoryEntry*, EYItemType> m_categoryEntryToItemTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYItemType, UYWidget_ItemCategoryEntry*> m_itemTypeToCategoryEntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UYWidget_ItemCategoryEntry*, EYMiscellaneousType> m_categoryEntryToMiscItemTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYMiscellaneousType, UYWidget_ItemCategoryEntry*> m_miscItemTypeToCategoryEntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UYWidget_ItemCategoryEntry*, EYVanityType> m_categoryEntryVanityItemTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYVanityType, UYWidget_ItemCategoryEntry*> m_vanityItemTypeToCategoryEntryMap;
    
public:
    UYWidget_ItemCategories();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleCategoryClicked(UYWidget_ItemCategoryEntry* categoryEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemCategoryEntry* BP_CreateAndAddItemCategoryEntry();
    
};

