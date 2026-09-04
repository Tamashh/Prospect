#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ItemListContainer.generated.h"

class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemListContainer : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_headlineTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_listPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_identifyingFactionLevel;
    
    UYWidget_ItemListContainer();

};

