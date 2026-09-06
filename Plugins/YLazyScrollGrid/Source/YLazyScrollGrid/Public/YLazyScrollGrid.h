#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "YLazyScrollGridItem.h"
#include "YLazyScrollGrid.generated.h"

class IYLazyScrollGridHostInterface;
class UYLazyScrollGridHostInterface;
class UScrollBox;
class UWidget;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class YLAZYSCROLLGRID_API UYLazyScrollGrid : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* m_scrollBox;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* m_gridItemContainer;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IYLazyScrollGridHostInterface> m_host;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_parentClipperWidget;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLazyScrollGridItem> m_items;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> m_pooledItems;

public:
    UYLazyScrollGrid();

private:
    UFUNCTION(BlueprintCallable)
    void OnUserScrolled(float CurrentOffset);

public:
    UFUNCTION(BlueprintCallable)
    void InitializeInConstruct(UWidget* parentClipperWidget, TSubclassOf<UUserWidget> gridItemClass, int32 numberToReserve);

};
