#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EscMenuButtonData.generated.h"

class USlateWidgetStyleAsset;
class UYNavigationCommand;

USTRUCT(BlueprintType)
struct FEscMenuButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYNavigationCommand> m_commandClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYNavigationCommand* m_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_buttonLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_buttonStyle;
    
    PROSPECT_API FEscMenuButtonData();
};

