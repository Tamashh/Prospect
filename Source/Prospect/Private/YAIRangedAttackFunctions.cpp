#include "YAIRangedAttackFunctions.h"

UYAIRangedAttackFunctions::UYAIRangedAttackFunctions() {
}

void UYAIRangedAttackFunctions::SpawnProjectileActorAttachedToSocket(AActor* Owner, FName SocketName, FDataTableRowHandle rangedAttackDefinitionRowHandle) {
}

bool UYAIRangedAttackFunctions::IsProjectileDataValid(const FYAIProjectileTransportData& projectileData) {
    return false;
}

FYAIProjectileTransportData UYAIRangedAttackFunctions::DetermineProjectileAttackData(const FYAIRangedAttackData& attackData) {
    return FYAIProjectileTransportData{};
}

bool UYAIRangedAttackFunctions::CanUseRangedAttack(const FYAIRangedAttackData& attackData) {
    return false;
}


