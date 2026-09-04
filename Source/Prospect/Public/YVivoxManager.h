#pragma once
#include "CoreMinimal.h"
#include "YVivoxJoinData.h"
#include "UObject/Object.h"
#include "OnInitializedVivoxDelegate.h"
#include "YFeatureToggles.h"
#include "YVivoxManager.generated.h"

class UYVivoxComponent;

UCLASS(Blueprintable)
class PROSPECT_API UYVivoxManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitializedVivox OnInitializedVivox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYVivoxComponent*> m_vivoxComponents;
    
public:
    UYVivoxManager();

private:
    UFUNCTION(BlueprintCallable)
    void RetryJoiningChannel(const FYVivoxJoinData& joinData);
    
    UFUNCTION(BlueprintCallable)
    void OnTryAutoReconnect(bool Initial);
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles);
    
    UFUNCTION(BlueprintCallable)
    bool IsTransmitting();
    
    UFUNCTION(BlueprintCallable)
    void DumpVivoxToLog();
    
};

