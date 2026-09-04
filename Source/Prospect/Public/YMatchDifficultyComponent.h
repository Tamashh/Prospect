#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YMatchDifficultyComponent.generated.h"

class UObject;
class UYMatchDifficultyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYMatchDifficultyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentDifficultyLevel;
    
    UYMatchDifficultyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDifficultyLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UYMatchDifficultyComponent* GetMatchDifficultyComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentDifficultyLevel(UObject* WorldContextObject);
    
};

