#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCharacterCustomizationExplicitCustomizationActor.h"
#include "YNPCCharacter.generated.h"

class AYStationLocationActor;
class UYMultiDataTableRowAssociationComponent;
class UYNpcVoiceOverComponent;

UCLASS(Blueprintable)
class PROSPECT_API AYNPCCharacter : public AYCharacterCustomizationExplicitCustomizationActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMultiDataTableRowAssociationComponent* m_multiRowAssociationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYNpcVoiceOverComponent* m_npcVoiceOverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_npcDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_animationDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYStationLocationActor* m_locationActor;
    
    AYNPCCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDataTableRowHandleSet(const TArray<FDataTableRowHandle>& oldRowHandle, const TArray<FDataTableRowHandle>& newRowHandle);
    
};

