#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYSceneState.h"
#include "OnSceneAddedDelegateDelegate.h"
#include "OnSceneRemovedDelegateDelegate.h"
#include "OnSceneWidgetRequestedDelegate.h"
#include "YSceneCompleteInitializationData.h"
#include "YSceneRuntimeData.h"
#include "YSceneRuntimeInitializationData.h"
#include "YSceneManager.generated.h"

class AYScene;

UCLASS(Blueprintable)
class PROSPECT_API UYSceneManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSceneWidgetRequested OnSceneWidgetRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSceneAddedDelegate OnSceneAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSceneRemovedDelegate OnSceneRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AYScene*> m_activeScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneRuntimeData m_sceneRuntimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYScene*> m_nonActiveScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneCompleteInitializationData m_lastInitializationData;
    
public:
    UYSceneManager();

    UFUNCTION(BlueprintCallable)
    static int32 RequestSceneWithCompleteData(UObject* objectContext, const FYSceneCompleteInitializationData& sceneCompleteData);
    
    UFUNCTION(BlueprintCallable)
    static int32 RequestScene(UObject* objectContext, const FYSceneRuntimeInitializationData& sceneRuntimeInitializationData);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveSceneByRow(UObject* objectContext, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterSceneState(UObject* objectContext, EYSceneState State, bool ForceRefresh);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterRuntimeData(UObject* objectContext, const FYSceneRuntimeData& newData, bool updateActiveScenes);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneActiveByRowHandle(UObject* objectContext, FDataTableRowHandle sceneRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSceneActive(AYScene* Scene);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySceneActive();
    
    UFUNCTION(BlueprintCallable)
    static EYSceneState GetActiveSceneState(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYScene* GetActiveScene();
    
};

