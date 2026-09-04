#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YNavigationCommand.h"
#include "YOpenSettingsCommand.generated.h"

class UYCommand_TopMenuButton_ChangeScreen;

UCLASS(Blueprintable)
class UYOpenSettingsCommand : public UYNavigationCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYCommand_TopMenuButton_ChangeScreen> m_changeScreenCommandClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCommand_TopMenuButton_ChangeScreen* m_changeScreenCommand;
    
    UYOpenSettingsCommand();

};

