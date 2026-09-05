#include "../CLIB_WriteQueForThreadsAt_STACK/include/CLIB_WriteEnableForThreadsAt_STACK.h"
#include "../CLIB_WriteQueForThreadsAt_STACK/include/WriteEnableForThreadsAt_STACK__Global.h"
#include <iostream>
#include <thread>
static void doTaskForThread(uint8_t threadId) {
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_Start(CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msb_uint8_t_to_MsbByteArray(threadId));
    std::cout << "thread " << static_cast<int>(threadId) << " :: SIMULATION : Doing Task." << std::endl;
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_End(CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msb_uint8_t_to_MsbByteArray(threadId));

}

int main() {
    std::cout << "SIMULATION Start." << std::endl;

    void* obj = nullptr;
    obj = CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_generate_Program();

    std::cout << "SIMULATION TestPoint: start instantiation." << std::endl;
    unsigned char* byteDEFAULT = nullptr;
    byteDEFAULT = new uint8_t(0);
    //CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_generate_Program();
    unsigned char* tempA = CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_terminate_Program();
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_End(byteDEFAULT);
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_Start(byteDEFAULT);
    std::cout << "SIMULATION TestPoint: end instantiation." << std::endl;

    doTaskForThread(1);

    std::cout << "SIMULATION End." << std::endl;
    return 0;
}

