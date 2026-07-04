#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Global.h"
#include <cstdint>
#include <cstring>
#include <iostream>
    std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::_stat_REG_CONST_2bitFLAG_IDLE;
    std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::_stat_REG_CONST_2bitFLAG_WAIT;
    std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::_stat_REG_CONST_2bitFLAG_WRITE;
    uint8_t* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::_stat_REG_ptr_number_Of_Implemented_Threads;
// public.
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
        boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
        boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
        boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
    }
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::~WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        delete _stat_REG_ptr_number_Of_Implemented_Threads;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;
        stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Global()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Global()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot4_PGM_INSTANTIATION_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        //if thread primed and system initialised, exit, else wait.
    }
    std::array<bool,2> CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::dyn_REG_get_ptr_CONST_2bitFLAG_IDLE()
    {
        return *stat_REG_get_ptr_CONST_2bitFLAG_IDLE();
    }
    std::array<bool,2> CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::dyn_REG_get_ptr_CONST_2bitFLAG_WAIT()
    {
        return *stat_REG_get_ptr_CONST_2bitFLAG_WAIT();
    }
    std::array<bool,2> CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::dyn_REG_get_ptr_CONST_2bitFLAG_WRITE()
    {
        return *stat_REG_get_ptr_CONST_2bitFLAG_WRITE();
    }
    uint8_t CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::dyn_REG_get_number_Of_Implemented_Threads()
    {
        return *stat_REG_get_ptr_number_Of_Implemented_Threads();
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;

        std::cout << "exiting boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global9)." << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;

        std::cout << "exiting boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global()." << std::endl;
    }
    unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_CONVERT_bool_to_ByteArray(bool bool_Value)
    {
        return reinterpret_cast<unsigned char*>(bool_Value);
    }
    unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    bool CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_CONVERT_ByteArray_To_bool(unsigned char* bytes)
    {
        return bytes[1] != 0;
    }
    uint8_t CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
// private.
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot1_DEFINE_CONST_2bitFLAG_IDLE()
    {
        _stat_REG_CONST_2bitFLAG_IDLE = nullptr;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot1_DEFINE_CONST_2bitFLAG_WAIT()
    {
        _stat_REG_CONST_2bitFLAG_WAIT = nullptr;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot1_DEFINE_CONST_2bitFLAG_WRITE()
    {
        _stat_REG_CONST_2bitFLAG_WRITE = nullptr;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads()
    {
        _stat_REG_ptr_number_Of_Implemented_Threads = nullptr;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_IDLE()
    {
        *_stat_REG_CONST_2bitFLAG_IDLE  = {true, true};
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WAIT()
    {
        *_stat_REG_CONST_2bitFLAG_WAIT  = {true, true};
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WRITE()
    {
        *_stat_REG_CONST_2bitFLAG_WRITE = {true, true};
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads()
    {
        _stat_REG_ptr_number_Of_Implemented_Threads = new uint8_t(UINT8_MAX);
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot3_INITIALISE_CONST_2bitFLAG_IDLE() {
        *_stat_REG_CONST_2bitFLAG_IDLE = {false, false};
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WAIT()
    {
        *_stat_REG_CONST_2bitFLAG_WAIT = {true, false};
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WRITE()
    {
        *_stat_REG_CONST_2bitFLAG_WRITE = {true, true};
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads()
    {
        *_stat_REG_ptr_number_Of_Implemented_Threads = static_cast<uint8_t>(4);
    }
    std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_get_ptr_CONST_2bitFLAG_IDLE()
    {
        return _stat_REG_CONST_2bitFLAG_IDLE;
    }
    std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_get_ptr_CONST_2bitFLAG_WAIT()
    {
        return _stat_REG_CONST_2bitFLAG_WAIT;
    }
    std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_get_ptr_CONST_2bitFLAG_WRITE()
    {
        return _stat_REG_CONST_2bitFLAG_WRITE;
    }
    uint8_t* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global::stat_REG_get_ptr_number_Of_Implemented_Threads()
    {
        return _stat_REG_ptr_number_Of_Implemented_Threads;
    }