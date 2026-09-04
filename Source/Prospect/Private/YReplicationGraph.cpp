#include "YReplicationGraph.h"
#include "YReplicationConnectionGraph.h"

UYReplicationGraph::UYReplicationGraph() {
    this->ReplicationConnectionManagerClass = UYReplicationConnectionGraph::StaticClass();
    this->GridSpatializationNode = NULL;
    this->AlwaysRelevantNode = NULL;
    this->PlayerStateFrequencyLimiterNode = NULL;
}


