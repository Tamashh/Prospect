#pragma once
#include "CoreMinimal.h"
#include "EYLazyScrollGridItemLoadStatus.h"
#include "YLazyScrollGridItem.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FYLazyScrollGridItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_customItemID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_index;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isVisible;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EYLazyScrollGridItemLoadStatus> m_loadStatus;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_wasLoadedOnce;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_widget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_addedToGridContainer;

    YLAZYSCROLLGRID_API FYLazyScrollGridItem();
};
