#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YFoliageHelperFunctionLibrary.generated.h"

class UFoliageType_InstancedStaticMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class PROSPECT_API UYFoliageHelperFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UYFoliageHelperFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static UStaticMesh* GetMeshFromFoliageType(UFoliageType_InstancedStaticMesh* FoliageType);
    
};

