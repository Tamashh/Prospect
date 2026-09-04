#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EYGetErrorHandling.h"
#include "Templates/SubclassOf.h"
#include "YWidgetPoolData.h"
#include "YWidgetPoolManager.generated.h"

class UUserWidget;
class UYWidgetPoolManager;

UCLASS(Blueprintable, Config=Game)
class UYWidgetPoolManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, int32> m_widgetClassToPoolInMenuMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, int32> m_widgetClassToPoolInGameMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, int32> m_widgetClassToPoolNoGC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> m_pooledWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FYWidgetPoolData> m_pooledWidgetsNoGC;
    
    UYWidgetPoolManager();

    UFUNCTION(BlueprintCallable)
    void ReturnWidgetToPool(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetWidgetFromPool(TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYWidgetPoolManager* Get(const UObject* WorldContext, EYGetErrorHandling errorHandling);
    
};

