#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ReleaseNotes.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ReleaseNotes : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_outputText;
    
    UYWidget_ReleaseNotes();

    UFUNCTION(BlueprintCallable)
    void OnReleaseNoteVisibilityChanged(bool newVisibility);
    
};

