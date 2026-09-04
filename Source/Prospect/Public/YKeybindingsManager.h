#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "YKeybindingManagerEventDelegate.h"
#include "YKeybindingsManager.generated.h"

class UInputSettings;
class UYKeybindingsManager;
class UYKeybindingsModel;

UCLASS(Blueprintable)
class UYKeybindingsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYKeybindingManagerEvent OnKeybindingsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYKeybindingManagerEvent OnKeybindingsSaved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYKeybindingsModel* m_model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputSettings* m_oldInputSettingsCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputSettings* m_defaultInputSettingsCached;
    
public:
    UYKeybindingsManager();

    UFUNCTION(BlueprintCallable)
    void SaveKeybindings();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyKeyPressed(FKey Key) const;
    
    UFUNCTION(BlueprintCallable)
    UYKeybindingsModel* GetModel() const;
    
    UFUNCTION(BlueprintCallable)
    static UYKeybindingsManager* FindKeybindingsManager(const UObject* objCtx);
    
};

