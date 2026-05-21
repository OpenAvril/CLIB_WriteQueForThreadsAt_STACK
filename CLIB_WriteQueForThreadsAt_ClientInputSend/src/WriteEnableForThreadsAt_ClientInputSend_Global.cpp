#include "../include/WriteEnableForThreadsAt_ClientInputSend_Global.h"
#include <cstdint>
#include <cstring>
#include <iostream>
    std::array<bool,2>* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::_stat_REG_CONST_2bitFLAG_IDLE;
    std::array<bool,2>* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::_stat_REG_CONST_2bitFLAG_WAIT;
    std::array<bool,2>* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::_stat_REG_CONST_2bitFLAG_WRITE;
    uint8_t* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::_stat_REG_ptr_number_Of_Implemented_Threads;
// public.
    CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global();
        boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global();
        boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global();
        boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global();
    }
    CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::~WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        delete _stat_REG_ptr_number_Of_Implemented_Threads;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;
        stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Global()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Global()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        //if thread primed and system initialised, exit, else wait.
    }
    std::array<bool,2> CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::dyn_REG_get_ptr_CONST_2bitFLAG_IDLE()
    {
        return *stat_REG_get_ptr_CONST_2bitFLAG_IDLE();
    }
    std::array<bool,2> CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::dyn_REG_get_ptr_CONST_2bitFLAG_WAIT()
    {
        return *stat_REG_get_ptr_CONST_2bitFLAG_WAIT();
    }
    std::array<bool,2> CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::dyn_REG_get_ptr_CONST_2bitFLAG_WRITE()
    {
        return *stat_REG_get_ptr_CONST_2bitFLAG_WRITE();
    }
    uint8_t CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::dyn_REG_get_number_Of_Implemented_Threads()
    {
        return *stat_REG_get_ptr_number_Of_Implemented_Threads();
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;

        std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global9)." << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;

        std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global()." << std::endl;
    }
    unsigned char* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_CONVERT_bool_to_ByteArray(bool bool_Value)
    {
        return reinterpret_cast<unsigned char*>(bool_Value);
    }
    unsigned char* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    bool CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_CONVERT_ByteArray_To_bool(unsigned char* bytes)
    {
        return bytes[1] != 0;
    }
    uint8_t CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
// private.
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot1_DEFINE_CONST_2bitFLAG_IDLE()
    {
        _stat_REG_CONST_2bitFLAG_IDLE = nullptr;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot1_DEFINE_CONST_2bitFLAG_WAIT()
    {
        _stat_REG_CONST_2bitFLAG_WAIT = nullptr;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot1_DEFINE_CONST_2bitFLAG_WRITE()
    {
        _stat_REG_CONST_2bitFLAG_WRITE = nullptr;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads()
    {
        _stat_REG_ptr_number_Of_Implemented_Threads = nullptr;
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_IDLE()
    {
        *_stat_REG_CONST_2bitFLAG_IDLE  = {true, true};
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WAIT()
    {
        *_stat_REG_CONST_2bitFLAG_WAIT  = {true, true};
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WRITE()
    {
        *_stat_REG_CONST_2bitFLAG_WRITE = {true, true};
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads()
    {
        _stat_REG_ptr_number_Of_Implemented_Threads = new uint8_t(UINT8_MAX);
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot3_INITIALISE_CONST_2bitFLAG_IDLE() {
        *_stat_REG_CONST_2bitFLAG_IDLE = {false, false};
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WAIT()
    {
        *_stat_REG_CONST_2bitFLAG_WAIT = {true, false};
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WRITE()
    {
        *_stat_REG_CONST_2bitFLAG_WRITE = {true, true};
    }
    void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads()
    {
        *_stat_REG_ptr_number_Of_Implemented_Threads = static_cast<uint8_t>(4);
    }
    std::array<bool,2>* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_get_ptr_CONST_2bitFLAG_IDLE()
    {
        return _stat_REG_CONST_2bitFLAG_IDLE;
    }
    std::array<bool,2>* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_get_ptr_CONST_2bitFLAG_WAIT()
    {
        return _stat_REG_CONST_2bitFLAG_WAIT;
    }
    std::array<bool,2>* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_get_ptr_CONST_2bitFLAG_WRITE()
    {
        return _stat_REG_CONST_2bitFLAG_WRITE;
    }
    uint8_t* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Global::stat_REG_get_ptr_number_Of_Implemented_Threads()
    {
        return _stat_REG_ptr_number_Of_Implemented_Threads;
    }