#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidgetView.h"
#include "YWidgetView_SettingEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetView_SettingEntry : public UYWidgetView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_settingDescriptionHandle;
    
public:
    UYWidgetView_SettingEntry();

};

