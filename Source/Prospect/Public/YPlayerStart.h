#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "YPlayerStart.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PROSPECT_API AYPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* visualizerMesh;
    
public:
    AYPlayerStart(const FObjectInitializer& ObjectInitializer);

};

