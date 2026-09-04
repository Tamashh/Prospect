#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YSpline.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class PROSPECT_API AYSpline : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckCorrectLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Socketnames;
    
public:
    AYSpline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RerunSplineConstructionScripts();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSocketNames(UStaticMesh* StaticMesh);
    
};

