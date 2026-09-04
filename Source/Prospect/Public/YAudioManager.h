#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "YAudioManager.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Audio)
class UYAudioManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_referencingAysncLoadedVoiceLines;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_multiplierTransientMasterVolumeDucking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> m_audioDataTablesToLoadAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> m_loadedDatatables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDataTableRowHandle> m_cachedVORowHandles;
    
public:
    UYAudioManager();

};

