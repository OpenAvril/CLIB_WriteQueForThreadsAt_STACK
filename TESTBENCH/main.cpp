#include "../CLIB_WriteQueForThreadsAt_DataCluster/include/ClusterAccess.h"
#include "../CLIB_WriteQueForThreadsAt_DataCluster/include/ClusterAccess_Framework_Global.h"
#include <iostream>
#include <thread>
static void doTaskForThread(uint8_t threadId, uint8_t dataClusterId) {
    wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(threadId, dataClusterId,wq::ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_Msb_uint8_t_to_MsbByteArray(threadId, threadId));
    std::cout << "thread " << std::to_string(threadId) << " :: SIMULATION : Doing Task." << std::endl;
    wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(threadId, dataClusterId, wq::ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_Msb_uint8_t_to_MsbByteArray(threadId, threadId));
}

int main() {
    std::cout << "Running..." << std::endl;
    auto* MAX_NUMBER_OF_DATA_CLUSTERS = new std::byte();
    *MAX_NUMBER_OF_DATA_CLUSTERS = static_cast<std::byte>(3);
    std::list<std::byte>* MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY = new std::list<std::byte>();
    MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->resize(static_cast<uint8_t>(*MAX_NUMBER_OF_DATA_CLUSTERS));
    MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->assign(0, static_cast<std::byte>(4));
    MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY->assign(1, static_cast<std::byte>(4));
    auto* dataClusterId = new uint8_t(0);
    auto* threadId = new uint8_t(0);
    unsigned char* byteDEFAULT = ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_Msb_uint8_t_to_MsbByteArray(0,static_cast<uint8_t>(0));
    std::cout << "SIMULATION Start." << std::endl;
    wq::ClusterAccess::generateHandles(*threadId, *MAX_NUMBER_OF_DATA_CLUSTERS, *MAX_NUMBER_OF_THREADS_FOR_ACCESS_ARRAY);

    std::cout << "SIMULATION start instantiation." << std::endl;
    unsigned char* tempA = wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(*threadId, *dataClusterId);
    wq::ClusterAccess::CLIB_ClusterAccess_App_FUNCT_terminate_Program(*threadId, *dataClusterId);
    wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(*threadId, *dataClusterId, byteDEFAULT);
    wq::ClusterAccess::CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(*threadId, *dataClusterId, byteDEFAULT);
    std::cout << "SIMULATION end instantiation." << std::endl;

    std::cout << "SIMULATION Start." << std::endl;
    dataClusterId = new uint8_t(0);
    threadId = new uint8_t(0);
    byteDEFAULT = ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_Msb_uint8_t_to_MsbByteArray(0,*threadId);
    doTaskForThread(*threadId, *dataClusterId);

    dataClusterId = new uint8_t(1);
    threadId = new uint8_t(1);
    byteDEFAULT = ClusterAccess_Framework_Global::stat_APP_CONVERT_ClusterAccess_Msb_uint8_t_to_MsbByteArray(0,*threadId);
    doTaskForThread(*threadId, *dataClusterId);
    std::cout << "SIMULATION End." << std::endl;
    return 0;
}//

