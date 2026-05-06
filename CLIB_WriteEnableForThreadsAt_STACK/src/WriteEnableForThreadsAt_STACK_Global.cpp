#include "../include/WriteEnableForThreadsAt_STACK_Global.h"
#include <cstdint>
#include <cstring>
#include <iostream>
    uint8_t* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_number_Of_Implemented_Threads;
// public.
    CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::WriteEnableForThreadsAt_STACK_Global()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global();
    }
    CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::~WriteEnableForThreadsAt_STACK_Global()
    {
        delete _REG_ptr_number_Of_Implemented_Threads;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global9)." << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global(CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
        stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()." << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global(CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global(CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK_Global(CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    unsigned char* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_bool_to_ByteArray(bool bool_Value)
    {
        return reinterpret_cast<unsigned char*>(bool_Value);
    }
    unsigned char* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    bool CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_To_bool(unsigned char* bytes)
    {
        return bytes[1] != 0;
    }
    uint8_t CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
    uint8_t CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_number_Of_Implemented_Threads()
    {
        return *stat_REG_get_ptr_number_Of_Implemented_Threads();
    }
// private.
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads()
    {
        _REG_ptr_number_Of_Implemented_Threads = nullptr;
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads()
    {
        _REG_ptr_number_Of_Implemented_Threads = new uint8_t(UINT8_MAX);
        while (stat_REG_get_ptr_number_Of_Implemented_Threads() == nullptr) {}
    }
    void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads()
    {
        *_REG_ptr_number_Of_Implemented_Threads = static_cast<uint8_t>(4);
    }
    uint8_t* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_number_Of_Implemented_Threads()
    {
        return _REG_ptr_number_Of_Implemented_Threads;
    }