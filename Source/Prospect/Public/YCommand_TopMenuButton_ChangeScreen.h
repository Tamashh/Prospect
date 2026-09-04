#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YScreenCommand.h"
#include "Templates/SubclassOf.h"
#include "YCommand_TopMenuButton_ChangeScreen.generated.h"

class UYScreenBase;

UCLASS(Blueprintable)
class UYCommand_TopMenuButton_ChangeScreen : public UYScreenCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_screenToTriggerBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_sceenChange;
    
    UYCommand_TopMenuButton_ChangeScreen();

};

