#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YReplicationGraphHelperFunctions.generated.h"

class APlayerController;
class UObject;
class UYReplicationGraph;

UCLASS(Blueprintable)
class PROSPECT_API UYReplicationGraphHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYReplicationGraphHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetTeamForPlayerController(APlayerController* InPlayerController, int32 InTeamIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetClassReplicationCullDistanceSquared(const UObject* WorldContextObject, UClass* InClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetClassReplicationCullDistance(const UObject* WorldContextObject, UClass* InClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UYReplicationGraph* FindYReplicationGraph(const UObject* WorldContextObject);
    
};

