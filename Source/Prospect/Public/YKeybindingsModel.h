#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYKeybindingInputDeviceType.h"
#include "YKeybindingData.h"
#include "YKeybindings.h"
#include "YOnKeyReassignedDelegate.h"
#include "YOnKeySetDelegate.h"
#include "YOnKeybindingDataChangedDelegate.h"
#include "YKeybindingsModel.generated.h"

UCLASS(Blueprintable)
class UYKeybindingsModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnKeyReassigned OnKeyReassigned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnKeySet OnKeySet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnKeybindingDataChanged OnKeybindingDataChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYKeybindingInputDeviceType m_activeInputDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYKeybindings m_keybindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYKeybindingData> m_addedBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYKeybindingData> m_removedBindings;
    
public:
    UYKeybindingsModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveDefaultKeybindingsChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYKeybindingData> GetRemovedDefaultKeybindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYKeybindings GetKeybindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKeybindingForName(const FName& InputName, FYKeybindingData& keybinding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYKeybindingData> GetAddedDefaultKeybindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYKeybindingInputDeviceType GetActiveInputDevice() const;
    
};

