#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YCharacterCustomizationArchetypeRow.h"
#include "YWidget_ArchetypesOverview.generated.h"

class UTextBlock;
class UVerticalBox;
class UYWidget_ArchetypeEntry;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_ArchetypesOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArchetypeClickedSignature, const FString&, archetypeId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInFirstTimeUserExperienceContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_archetypeVerticalBox;
    
public:
    UYWidget_ArchetypesOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedArchetype(const FName& archetypeId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshArchetypeEntries();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnArchetypeEntryWidgetClicked(UYWidget_ArchetypeEntry* archetypeEntryWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ArchetypeEntry* BP_CreateAndAddArchetypeEntryWidget(const FYCharacterCustomizationArchetypeRow& row);
    
};

