# Import / Export Wrapper(s).
## Client.
---
### Native C++ Libraries.
#### LIB_WriteEnableForThreadsAt_STACK.dll.
##### Header.
````
#ifndef LIBWRITEENABLEFORTHREADSATSTACK_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSTACK
	{
		class LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API CLIBWriteEnableForThreadsAtSTACK
		{
		public:
			static void* app_FUNCT_generate_Program();
			static bool app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_write_End(void*, unsigned char* bytes);
			static void app_FUNCT_write_Start(void*, unsigned char* bytes);
		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_Framework();
			static void stat_boot3_CLASS_INITIALISE_Framework();
			static class WriteEnableForThreadsAt_STACK_Framework* stat_CLASS_get_ptr_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif
````
##### Source.
````
#include "pch.h"
class OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;
	
	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
bool OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_get_flag_isPGM_INSTNATIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
	}
	return true;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_STACK;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}
	
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_write_End(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_write_Start(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); memberFunctionId++)
	{
		if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = true;
		}
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_STACK = new class OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_STACK;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

#### LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll.
##### Header.
````
#ifndef LIBWRITEENABLEFORTHREADSATCLIENTOUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API 
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
	{
		class LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
		{
		public:
			static void* app_FUNCT_generate_Program();
			static bool app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_write_End(void*, unsigned char* bytes);
			static void app_FUNCT_write_Start(void*, unsigned char* bytes);
		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_Framework();
			static void stat_boot3_CLASS_INITIALISE_Framework();
			static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* stat_CLASS_get_ptr_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif
````
##### Source.
````
#include "pch.h"
class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;
	
	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
bool OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::app_FUNCT_get_flag_isPGM_INSTNATIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
	}
	return true;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}
	
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::app_FUNCT_write_End(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::app_FUNCT_write_Start(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); memberFunctionId++)
	{
		if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = true;
		}
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

---
### Java Imports.
#### JavaLIBWriteQue_STACK.java.
````

````

#### JavaLIBWriteQue_ClientOutputRecieve.java.
````

````

---
### C# Imports.
#### CsharpLIBWriteQue_STACK.cs.
````

````

#### CsharpLIBWriteQue_ClientOutputRecieve.cs.
````

````



## Server.
---

### Native C++ Libraries.
#### LIB_WriteEnableForThreadsAt_SERVERINPUTRECIEVE.dll.
##### Header.
````
#ifndef LIBWRITEENABLEFORTHREADSATSERVERINPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE
	{
		class LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE
		{
		public:
			static void* app_FUNCT_generate_Program();
			static bool app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_write_End(void*, unsigned char* bytes);
			static void app_FUNCT_write_Start(void*, unsigned char* bytes);
		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_Framework();
			static void stat_boot3_CLASS_INITIALISE_Framework();
			static class WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* stat_CLASS_get_ptr_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif
````
##### Source.
````
#include "pch.h"
class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECIEVE;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;
	
	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
bool OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_get_flag_isPGM_INSTNATIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
	}
		return true;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECIEVE;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_write_End(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::app_FUNCT_write_Start(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); memberFunctionId++)
	{
		if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = true;
		}
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECIEVE = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECIEVE = new class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::WriteEnableForThreadsAt_SERVERINPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTRECIEVE;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVERINPUTRECIEVE::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

#### LIB_WriteEnableForThreadsAt_SERVEROUTPUTSEND.dll.
##### Header.
````
#ifndef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTSEND_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API 
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND
	{
		class LIBWRITEENABLEFORTHREADSATSERVERINPUTSEND_API CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND
		{
		public:
			static void* app_FUNCT_generate_Program();
			static bool app_FUNCT_get_flag_isPGM_INSTNATIATED();
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_write_End(void*, unsigned char* bytes);
			static void app_FUNCT_write_Start(void*, unsigned char* bytes);
		private:
			static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
			static void stat_boot1_CLASS_DEFINE_Framework();
			static void stat_boot3_CLASS_INITIALISE_Framework();
			static class WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* stat_CLASS_get_ptr_Framework();
			static void stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
			static void stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
			static bool* stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED();
		};
	}
}
#endif
````
#### Source.
````
#include "pch.h"
class OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Program - INSTANTIATION." << std::endl;
	
	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_Framework();
}
bool OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_get_flag_isPGM_INSTNATIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
	}
	return true;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}
	
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_End(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::app_FUNCT_write_Start(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); memberFunctionId++)
	{
		if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0] = true;
		}
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND = new class OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::WriteEnableForThreadsAt_SERVEROUTPUTSEND_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTSEND;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::CLIBWriteEnableForThreadsAtSERVEROUTPUTSEND::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}
````

### Java Imports.
#### JavaLIBWriteQue_ClientInputRecieve.java.
````

````

#### JavaLIBWriteQue_ClientOutputSend.java.
````

````

---
### C# Imports.
#### CsharpLIBWriteQue_ClientInputRecieve.cs.
````

````

#### CsharpLIBWriteQue_ClientOutputSend.cs.
````

````

---
---
---
