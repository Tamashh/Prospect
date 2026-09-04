#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YNewsCheatManager.generated.h"

UCLASS(Blueprintable)
class UYNewsCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYNewsCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetNewsPreviewDate(const FString& dateString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugResetNewsPreviewDate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugFetchNewsData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCreateTestNewsItem(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugClearNewsUserData();
    
};

