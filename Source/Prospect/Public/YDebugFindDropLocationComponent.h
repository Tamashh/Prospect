#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YFindDropLocationData.h"
#include "YDebugFindDropLocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYDebugFindDropLocationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFindDropLocationData> m_findDropLocationEvaulationData;
    
public:
    UYDebugFindDropLocationComponent(const FObjectInitializer& ObjectInitializer);

};

