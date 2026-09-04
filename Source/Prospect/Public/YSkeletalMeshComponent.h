#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "YSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_preventPhysicsStateCreationOnDedicatedServer;
    
public:
    UYSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

