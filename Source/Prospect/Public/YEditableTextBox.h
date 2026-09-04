#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "OnTabPressedEventDelegate.h"
#include "OnUpDownKeyPressedDelegate.h"
#include "YEditableTextBox.generated.h"

UCLASS(Blueprintable, Config=Game)
class UYEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabPressedEvent OnTabPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabPressedEvent OnShiftTabPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpDownKeyPressed OnUpDownArrowPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_upDownArrowInputEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_textLimit;
    
    UYEditableTextBox();

};

