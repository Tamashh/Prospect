#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EYGameplayContextType.h"
#include "YPerkActivationData.generated.h"

class AActor;
class UYGameplayAttributesComponent;

USTRUCT(BlueprintType)
struct FYPerkActivationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_contextLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gpaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_contextActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayContextType m_contextType;
    
    PROSPECT_API FYPerkActivationData();
};

