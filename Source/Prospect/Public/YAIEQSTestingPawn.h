#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
#include "Engine/DataTable.h"
#include "YAIEQSTestingPawn.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYAIEQSTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_aiTuningRowHandle;

    AYAIEQSTestingPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RunEQSQueryNow();
    
};

