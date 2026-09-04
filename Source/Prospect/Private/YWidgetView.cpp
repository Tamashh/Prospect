#include "YWidgetView.h"
#include "Templates/SubclassOf.h"

UYWidgetView::UYWidgetView() {
    this->m_widgetProviderClass = NULL;
    this->m_widgetProvider = NULL;
    this->m_wantsToAnimateVisibilityWithParent = true;
}

void UYWidgetView::UnregisterWidgetProvider(UYWidgetProvider* provider) {
}

void UYWidgetView::UnregisterWidgetByName(FName Name) {
}

UYWidgetProvider* UYWidgetView::RequestWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass, const FString& callerContext, bool shouldRefreshData) {
    return NULL;
}

void UYWidgetView::ReleaseWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass) const {
}

void UYWidgetView::RegisterWidget(FName Name, UYWidget* Widget) {
}

void UYWidgetView::OnProviderDataChanged(const FName& DataName, const FName& dataType) {
}

TArray<UYWidget*> UYWidgetView::GetWidgetsByClass(TSubclassOf<UYWidget> WidgetClass) const {
    return TArray<UYWidget*>();
}

UYWidget* UYWidgetView::GetWidgetByNameAndClass(FName Name, TSubclassOf<UYWidget> WidgetClass) const {
    return NULL;
}

UYWidget* UYWidgetView::GetWidgetByName(FName Name) const {
    return NULL;
}

FName UYWidgetView::GetNameForWidget(UYWidget* Widget) const {
    return NAME_None;
}

UYWidgetProvider* UYWidgetView::GetAssociatedWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass) const {
    return NULL;
}

void UYWidgetView::ClearWidgetRegistry() {
}






