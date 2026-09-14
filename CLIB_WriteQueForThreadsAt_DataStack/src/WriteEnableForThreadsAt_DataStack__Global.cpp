#include "../include/WriteEnableForThreadsAt_DataStack__Global.h"
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>
std::array<bool,2>* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE;
std::array<bool,2>* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT;
std::array<bool,2>* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE;
uint8_t* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::_stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads;
CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::WriteEnableForThreadsAt_DataStack__Global()
{

}
CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::~WriteEnableForThreadsAt_DataStack__Global()
{
    delete _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE;
    delete _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT;
    delete _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE;
    delete _stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__Global()
{
    std::cout << "entered dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__Global()." << std::endl;
    std::cout << "exiting dyn_REG_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__Global()." << std::endl;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__Global()
{
    std::cout << "entered dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__Global()." << std::endl;
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT();
    stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE();
    std::cout << "exiting dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__Global()." << std::endl;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_DataStack__Global()
{
    std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_DataStack__Global()." << std::endl;
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE();
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT();
    stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_DataStack__Global()." << std::endl;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Global()
{
    std::cout << "entered dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Global()" << std::endl;
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE();
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT();
    stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Global()" << std::endl;
}
std::array<bool,2> CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE();
}
std::array<bool,2> CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT();
}
std::array<bool,2> CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE()
{
    return *stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE();
}
uint8_t CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::dyn_REG_get_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads()
{
    return *stat_REG_get_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads();
}
int CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Bool_To_Int(bool value)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Bool_To_Int(value);
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msbdouble_To_MsbByteArray(double value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msbdouble_To_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbDouble_To_MsbByteArray(double value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbDouble_To_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msb_uint8_t_to_MsbByteArray(uint8_t value) {
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msb_uint8_t_to_MsbByteArray(value);
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbBoolean_To_MsbByteArray(bool value)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbBoolean_To_MsbByteArray(value);
}
bool CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_MsbBoolean(byteArray);
}
double CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_MsbDouble(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_MsbDouble(byteArray);
}
double CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_Msbdouble(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_Msbdouble(byteArray);
}
uint8_t CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray)
{
    return pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_Msbuint8_t(byteArray);
}
int CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Bool_To_Int(bool value) {
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
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbBoolean_To_MsbByteArray(bool value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[1];
    for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
        buffer[bitIndex] = static_cast<unsigned char>(value);
    }
    return buffer;
}
bool CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_MsbBoolean(const unsigned char* byteArray) {
    return (byteArray[7] & 1) != 0;
}
double CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_MsbDouble(const unsigned char* byteArray) {
    double temp;
    std::memcpy(&temp, byteArray, sizeof(double));
    return temp;
}
double CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_Msbdouble(const unsigned char* byteArray) {
    double temp;
    std::memcpy(&temp, byteArray, sizeof(double));
    return temp;
}
uint8_t CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray) {
    uint8_t temp;
    std::memcpy(&temp, byteArray, sizeof(uint8_t));
    return temp;
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msbdouble_To_MsbByteArray(double value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[4] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
    std::memcpy(buffer, &value, sizeof(double));
    return buffer;
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__MsbDouble_To_MsbByteArray(double value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[8] { UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX, UCHAR_MAX};
    std::memcpy(buffer, &value, sizeof(double));
    return buffer;
}
unsigned char* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::pr_stat_APP_CONVERT_WriteEnableForThreadsAt_DataStack__Msb_uint8_t_to_MsbByteArray(uint8_t value) {
    unsigned char* buffer = nullptr;
    buffer = new unsigned char[1] { UCHAR_MAX };
    std::memcpy(buffer, &value, sizeof(uint8_t));
    return buffer;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE = nullptr;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT = nullptr;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot1_DEFINE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE = nullptr;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads = nullptr;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE = new std::array<bool, 2>();
    *_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE  = {true, true};
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT = new std::array<bool, 2>();
    *_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT  = {true, true};
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot2_SUBSTANTIATE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE = new std::array<bool, 2>();
    *_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE = {true, true};
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads = new uint8_t();
    *_stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads = UINT8_MAX;
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE() {
    *_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE = {false, false};
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT = {true, false};
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot3_INITIALISE_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE()
{
    *_stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE = {true, true};
}
void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads()
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads = static_cast<uint8_t>(4);
}
std::array<bool,2>* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_IDLE;
}
std::array<bool,2>* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WAIT;
}
std::array<bool,2>* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_get_ptr_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_DataStack__2bitFLAG_WRITE;
}
uint8_t* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack__Global::stat_REG_get_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads()
{
    return _stat_REG_ptr_WriteEnableForThreadsAt_DataStack__number_Of_Implemented_Threads;
}