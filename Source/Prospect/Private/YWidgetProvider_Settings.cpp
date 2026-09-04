#include "YWidgetProvider_Settings.h"

UYWidgetProvider_Settings::UYWidgetProvider_Settings() {
}

void UYWidgetProvider_Settings::SetDataInt(FName Name, int32 Value) {
}

void UYWidgetProvider_Settings::SetDataFloat(FName Name, float Value) {
}

void UYWidgetProvider_Settings::SetDataBool(FName Name, bool Value) {
}

int32 UYWidgetProvider_Settings::GetDataInt(FName Name) const {
    return 0;
}

float UYWidgetProvider_Settings::GetDataFloat(FName Name) const {
    return 0.0f;
}

bool UYWidgetProvider_Settings::GetDataBool(FName Name) const {
    return false;
}

FString UYWidgetProvider_Settings::GetCultureEnglishName(const FString& Culture) const {
    return TEXT("");
}


