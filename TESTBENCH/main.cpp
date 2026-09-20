#include "../CLIB_WriteQueForThreadsAt_DataCluster/include/CLIB_WriteEnableForThreadsAt_DataCluster.h"
#include "../CLIB_WriteQueForThreadsAt_DataCluster/include/WriteEnableForThreadsAt_DataCluster_Framework_Global.h"
#include <iostream>
#include <thread>
static void doTaskForThread(uint8_t threadId, uint8_t dataClusterId) {
    CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(threadId, dataClusterId,CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataCluster_Msb_uint8_t_to_MsbByteArray(threadId, threadId));
    std::cout << "thread " << std::to_string(threadId) << " :: SIMULATION : Doing Task." << std::endl;
    CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(threadId, dataClusterId, CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataCluster_Msb_uint8_t_to_MsbByteArray(threadId, threadId));
}

int main() {
    std::cout << "Running..." << std::endl;
    auto* dataClusterId = new uint8_t(0);
    auto* threadId = new uint8_t(0);
    std::cout << "SIMULATION Start." << std::endl;
    CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_generateAllLibrariesWithin(*threadId);

    std::cout << "SIMULATION start instantiation." << std::endl;
    unsigned char* byteDEFAULT = nullptr;
    byteDEFAULT = new uint8_t(0);
    unsigned char* tempA = CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(*threadId, *dataClusterId);
    CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_terminate_Program(*threadId, *dataClusterId);
    CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(*threadId, *dataClusterId, byteDEFAULT);
    CLIBWriteQueAtDataCluster::CLIB_WriteEnableForThreadsAt_DataCluster::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(*threadId, *dataClusterId, byteDEFAULT);
    std::cout << "SIMULATION end instantiation." << std::endl;

    std::cout << "SIMULATION Start." << std::endl;
    doTaskForThread(*threadId, *dataClusterId);
    std::cout << "SIMULATION End." << std::endl;
    return 0;
}

