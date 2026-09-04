#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "Styling/SlateTypes.h"
#include "Components/InputKeySelector.h"
#include "YInputKeySelector.generated.h"

UCLASS(Blueprintable)
class UYInputKeySelector : public UInputKeySelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle m_conflictingInputButtonStyle;
    
    UYInputKeySelector();

private:
    UFUNCTION(BlueprintCallable)
    void HandleKeyUnassigned();
    
    UFUNCTION(BlueprintCallable)
    void HandleKeySelected(const FInputChord& InSelectedKey);
    
};

