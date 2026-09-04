#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YPerformanceTestFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UYPerformanceTestFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYPerformanceTestFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopPerformanceCaptureAndSendInformation(const FString& performanceCaptureName, const FString& timeSeriesSpecifier, const TMap<FString, FString>& additionalInfluxData);
    
    UFUNCTION(BlueprintCallable)
    static void StartSingleFrameCaptureAndSendInformation(const FString& captureName);
    
    UFUNCTION(BlueprintCallable)
    static void StartPerformanceCapture();
    
    UFUNCTION(BlueprintCallable)
    static void EnableStatTracking();
    
    UFUNCTION(BlueprintCallable)
    static void DisableStatTracking();
    
    UFUNCTION(BlueprintCallable)
    static void CollectAndSendSimpleFPSData(const FString& performanceCaptureName, const FString& timeSeriesSpecifier);
    
    UFUNCTION(BlueprintCallable)
    static void AddInfo(const FString& infoString);
    
    UFUNCTION(BlueprintCallable)
    static void AddError(const FString& errorString);
    
};

