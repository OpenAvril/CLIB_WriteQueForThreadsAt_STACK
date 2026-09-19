#include "../CLIB_WriteQueForThreadsAt_DataStack/include/CLIB_WriteEnableForThreadsAt_DataStack.h"
#include "../CLIB_WriteQueForThreadsAt_DataStack/include/WriteEnableForThreadsAt_DataStack_Framework_Global.h"
#include <iostream>
#include <thread>
static void doTaskForThread(uint8_t threadId) {
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_write_Start(threadId, CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack_Msb_uint8_t_to_MsbByteArray(threadId, threadId));
    std::cout << "thread " << static_cast<int>(threadId) << " :: SIMULATION : Doing Task." << std::endl;
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_write_End(threadId, CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack_Msb_uint8_t_to_MsbByteArray(threadId, threadId));
}

int main() {
    std::cout << "Running..." << std::endl;
    auto* threadId = new uint8_t(0);

    void* obj = nullptr;
    obj = CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_generate_Program(*threadId);
std::cout << "SIMULATION Start." << std::endl;
    std::cout << "SIMULATION TestPoint: start instantiation." << std::endl;
    unsigned char* byteDEFAULT = nullptr;
    byteDEFAULT = new uint8_t(0);
    unsigned char* tempA = CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(*threadId);
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_terminate_Program(*threadId);
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_write_End(*threadId, byteDEFAULT);
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack_App_FUNCT_write_Start(*threadId, byteDEFAULT);
    std::cout << "SIMULATION TestPoint: end instantiation." << std::endl;
    std::cout << "SIMULATION Start." << std::endl;
    doTaskForThread(1);

    std::cout << "SIMULATION End." << std::endl;
    return 0;
}

