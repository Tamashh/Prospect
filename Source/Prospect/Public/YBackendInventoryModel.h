#pragma once
#include "CoreMinimal.h"
#include "YInventory.h"
#include "YPlayerSet.h"
#include "UObject/Object.h"
#include "YBackendFreeLoadout.h"
#include "YBackendInventorySignatureDelegate.h"
#include "YBackendInventoryStateChangedSignatureDelegate.h"
#include "YInventorySnapshot.h"
#include "YPlayerInventory.h"
#include "YBackendInventoryModel.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBackendInventoryModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBackendInventorySignature OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBackendInventoryStateChangedSignature OnInventoryStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_backendRawInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYInventorySnapshot m_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYInventory m_rawIncomingInventoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYPlayerSet m_rawIncomingPlayerSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYBackendFreeLoadout m_rawIncomingFreeLoadoutInfo;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_rawInventoryDataReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_rawPlayerSetDataReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_rawFreeLoadoutDataReceived;

public:
    UYBackendInventoryModel();

};

