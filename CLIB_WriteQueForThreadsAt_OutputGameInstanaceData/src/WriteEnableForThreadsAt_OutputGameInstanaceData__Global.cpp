#include "../include/WriteEnableForThreadsAt_OutputGameInstanaceData__Global.h"

#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE;
std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT;
std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE;
uint8_t* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::_stat_REG_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads;
CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::WriteEnableForThreadsAt_OutputGameInstanaceData__Global()
{

}
CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::~WriteEnableForThreadsAt_OutputGameInstanaceData__Global()
{
    delete _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE;
    delete _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT;
    delete _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE;
    delete _stat_REG_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads;
}

void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()
{
    std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()." << std::endl;
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE();
    std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()." << std::endl;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()
{
    std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()." << std::endl;
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE();
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT();
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads();
    std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()." << std::endl;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()
{
    std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()" << std::endl;
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE();
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT();
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads();
    std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()" << std::endl;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_OutputGameInstanaceData__Global()
{
    //if thread primed and system initialised, exit, else wait.
}
std::array<bool,2> CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE();
}
std::array<bool,2> CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT();
}
std::array<bool,2> CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE();
}
uint8_t CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::dyn_REG_get_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads()
{
    return *stat_REG_get_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads();
}
int CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__Bool_To_Int(bool value)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__Bool_To_Int(value);
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbFloat_To_MsbByteArray(float value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbFloat_To_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbDouble_To_MsbByteArray(double value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbDouble_To_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__Msb_uint8_t_to_MsbByteArray(uint8_t value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__Msb_uint8_t_to_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbBoolean_To_MsbByteArray(bool value)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbBoolean_To_MsbByteArray(value);
}
bool CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbBoolean(byteArray);
}
double CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbDouble(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbDouble(byteArray);
}
float CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbFloat(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbFloat(byteArray);
}
uint8_t CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_Msbuint8_t(byteArray);
}
int CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__Bool_To_Int(bool value) {
    int* temp = nullptr;
    *temp = 2;
    if (value) {
        *temp = 1;;
    }
    if (!value) {
        *temp = 0;
    }
    return *temp;
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbBoolean_To_MsbByteArray(bool value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[1];
    for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
        buffer[bitIndex] = static_cast<unsigned char>(value);
    }
    return buffer;
}
bool CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray) {
    return (byteArray[7] & 1) != 0;
}
double CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbDouble(const unsigned char* byteArray) {
    double temp;
    std::memcpy(&temp, byteArray, sizeof(double));
    return temp;
}
float CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_MsbFloat(const unsigned char* byteArray) {
    float temp;
    std::memcpy(&temp, byteArray, sizeof(float));
    return temp;
}
uint8_t CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray) {
    uint8_t temp;
    std::memcpy(&temp, byteArray, sizeof(uint8_t));
    return temp;
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbFloat_To_MsbByteArray(float value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
    std::memcpy(buffer, &value, sizeof(float));
    return buffer;
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbDouble_To_MsbByteArray(double value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
    std::memcpy(buffer, &value, sizeof(double));
    return buffer;
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__Msb_uint8_t_to_MsbByteArray(uint8_t value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[1] { UCHAR_MAX };
    std::memcpy(buffer, &value, sizeof(uint8_t));
    return buffer;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE = nullptr;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT = nullptr;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE = nullptr;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads = nullptr;
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE  = {true, true};
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT  = {true, true};
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE = {true, true};
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads = new uint8_t(UINT8_MAX);
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE() {
    *_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE = {false, false};
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT = {true, false};
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE = {true, true};
}
void CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads()
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads = static_cast<uint8_t>(5);
}
std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_IDLE;
}
std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WAIT;
}
std::array<bool,2>* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_OutputGameInstanaceData__2bitFLAG_WRITE;
}
uint8_t* CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_REG_get_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads()
{
    return _stat_REG_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__number_Of_Implemented_Threads;
}