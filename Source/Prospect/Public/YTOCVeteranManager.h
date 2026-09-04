#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YTOCVeteranManager.generated.h"

class UYTOCVeteranManager;

UCLASS(Blueprintable)
class PROSPECT_API UYTOCVeteranManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYTOCIsVeteranPlayer, bool, IsVeteranPlayer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTOCIsVeteranPlayer OnIsVeteranPlayer;
    
    UYTOCVeteranManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void IsVeteranPlayer(const UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYTOCVeteranManager* GetTOCVeteranManager(const UObject* WorldContext, const FString& ctxStr);
    
};

