#include "../CLIB_WriteQueForThreadsAt_DataStack/include/CLIB_WriteEnableForThreadsAt_DataStack.h"
#include "../CLIB_WriteQueForThreadsAt_DataStack/include/WriteEnableForThreadsAt_DataStack__Global.h"
#include <iostream>
#include <thread>
static void doTaskForThread(uint8_t threadId) {
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_write_Start(CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msb_uint8_t_to_MsbByteArray(threadId));
    std::cout << "thread " << static_cast<int>(threadId) << " :: SIMULATION : Doing Task." << std::endl;
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_write_End(CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msb_uint8_t_to_MsbByteArray(threadId));
}

int main() {
    std::cout << "SIMULATION Start." << std::endl;

    void* obj = nullptr;
    obj = CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_generate_Program();

    std::cout << "SIMULATION TestPoint: start instantiation." << std::endl;
    unsigned char* byteDEFAULT = nullptr;
    byteDEFAULT = new uint8_t(0);
    //CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_generate_Program();
    unsigned char* tempA = CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_terminate_Program();
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_write_End(byteDEFAULT);
    CLIBWriteQueAtDataStack::CLIB_WriteEnableForThreadsAt_DataStack::CLIB_WriteEnableForThreadsAt_DataStack__App_FUNCT_write_Start(byteDEFAULT);
    std::cout << "SIMULATION TestPoint: end instantiation." << std::endl;

    doTaskForThread(1);

    std::cout << "SIMULATION End." << std::endl;
    return 0;
}

