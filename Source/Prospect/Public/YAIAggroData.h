#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYAISenseType.h"
#include "YAIAggroData.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable)
class UYAIAggroData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> m_aiCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_aggroTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aggroValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_weightedAggroValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAISenseType m_senseType;
    
    UYAIAggroData();

};

