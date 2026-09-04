#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAIUpdateManager.generated.h"

class AActor;
class ACharacter;
class AController;
class UYAIAggroComponent;
class UYAIAggroData;
class UYAIAggroDataArrayObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAIUpdateManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AController>, UYAIAggroComponent*> m_aiAggroComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroData*> m_aggroDataEntries;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<ACharacter>, UYAIAggroDataArrayObject*> m_aiCharacterAggroMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, UYAIAggroDataArrayObject*> m_targetAggroMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroData*> m_aggroDataObjectPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroDataArrayObject*> m_aggroDataArrayObjectPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroComponent*> m_aggroComponentsToEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroDataArrayObject*> m_aggroTargetsToUpdate;
    
public:
    UYAIUpdateManager(const FObjectInitializer& ObjectInitializer);

};

