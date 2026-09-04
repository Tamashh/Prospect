#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "YTCCodeConventionActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AYTCCodeConventionActor : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AdditionalMesh;
    
public:
    AYTCCodeConventionActor(const FObjectInitializer& ObjectInitializer);

};

