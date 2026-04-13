#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTSEND.h"
class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND;
bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
void* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED();
	stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework(stat_CLASS_get_ptr_Framework());
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
bool OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::app_FUNCT_get_flag_isPGM_INSTNATIATED()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] == false) {
		return stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[0];
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[1] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] == false) {
		delete _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND;
		while (stat_CLASS_get_ptr_Framework() != NULL) {}
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[2] = false;
	}
	
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::app_FUNCT_write_End(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[3] = false;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::app_FUNCT_write_Start(void* obj, unsigned char* bytes)
{
	if (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] == false) {
		OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
	}
	else {
		stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
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
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_boot1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_boot3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND = new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::WriteEnableForThreadsAt_CLIENTINPUTSEND_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_CLASS_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTSEND;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTSEND::CLIBWriteEnableForThreadsAtCLIENTINPUTSEND::stat_REG_get_ptr_flag_isMemberFunctionINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}