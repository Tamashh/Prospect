#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EscMenuButtonData.h"
#include "Templates/SubclassOf.h"
#include "YWidget_EscapeMenu.generated.h"

class UVerticalBox;
class UYWidget_EscapeMenuItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EscapeMenu : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEscMenuButtonData> m_defaultOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_EscapeMenuItem> m_itemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_itemsVerticalBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioAnimateOut;
    
public:
    UYWidget_EscapeMenu();

    UFUNCTION(BlueprintCallable)
    void ShowButtons(const TArray<FEscMenuButtonData>& menuOptions);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(UYWidget_EscapeMenuItem* clickedItem);
    
};

