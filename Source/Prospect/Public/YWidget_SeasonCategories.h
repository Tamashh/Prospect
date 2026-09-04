#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYSeasonCategory.h"
#include "YWidget_SeasonCategories.generated.h"

class UYWidget_ItemCategoryEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SeasonCategories : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCategorySelectedSignature, EYSeasonCategory, Category);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCategorySelectedSignature OnCategorySelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYSeasonCategory> m_supportedCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_selectedItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_fortunaPassCategoryEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_seasonalChallengesCategoryEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_dailyWeeklyChallengesCategoryEntry;
    
public:
    UYWidget_SeasonCategories();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleCategoryClicked(UYWidget_ItemCategoryEntry* categoryEntry);
    
};

