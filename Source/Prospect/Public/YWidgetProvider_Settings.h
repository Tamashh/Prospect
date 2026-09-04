#pragma once
#include "CoreMinimal.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_Settings.generated.h"

UCLASS(Blueprintable)
class UYWidgetProvider_Settings : public UYWidgetProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> m_floatSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> m_boolSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_intSettings;
    
public:
    UYWidgetProvider_Settings();

    UFUNCTION(BlueprintCallable)
    void SetDataInt(FName Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDataFloat(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDataBool(FName Name, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataInt(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDataFloat(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDataBool(FName Name) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCultureEnglishName(const FString& Culture) const;
    
};

