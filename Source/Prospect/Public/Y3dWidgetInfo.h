#pragma once
#include "CoreMinimal.h"
#include "Y3dWidgetInfo.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct PROSPECT_API FY3dWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> m_userWidget3d;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socketNameAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_widgetScale;
    
    FY3dWidgetInfo();
};

