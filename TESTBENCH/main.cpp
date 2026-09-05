#include "../CLIB_WriteQueForThreadsAt_STACK/include/CLIB_WriteEnableForThreadsAt_STACK.h"
#include <iostream>
int main() {
    std::cout << "SIMULATION Start." << std::endl;

    void* obj = nullptr;
    obj = CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_generate_Program();
    std::cout << "SIMULATION TestPoint: alpha." << std::endl;
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_Start(0);
    std::cout << "SIMULATION TestPoint:  bravo." << std::endl;
    CLIBWriteQueAtSTACK::CLIB_WriteEnableForThreadsAt_STACK::CLIB_WriteEnableForThreadsAt_STACK__App_FUNCT_write_End(0);

    std::cout << "SIMULATION End." << std::endl;
    return 0;
}