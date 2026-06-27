#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteQueForThreadAt_InputPerihperalSamples.h"
#include "../include/WriteQueForThreadAt_InputPerihperalSamples.h"
#include "../include/WriteQueForThreadAt_InputPerihperalSamples_Framework.h"
#include "../include/WriteQueForThreadAt_InputPerihperalSamples_Global.h"
CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* _stat_REG_ptr_Framework_WriteQueForThreadAt_InputPerihperalSamples;
	bool* _stat_REG_flag_isMemberFunctionINSTANTIATED;
// public.
void* CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_boot1_CLASS_DEFINE_Framework();
	stat_boot3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
	stat_REG_boot3_INITIALISE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
	stat_CLASS_get_ptr_Framework()->boot4_PGM_INSTANTIATION_WriteQueForThreadAt_InputPerihperalSamples_Framework(stat_CLASS_get_ptr_Framework());
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
unsigned char* CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::app_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[1] == false) {
		return CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global::stat_CONVERT_bool_to_ByteArray(stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[0]);
	}
	else {
		stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[1] = false;
		return CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global::stat_CONVERT_bool_to_ByteArray(true);
	}
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::app_FUNCT_terminate_Program()
{
	if (stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[2] == false) {
		delete _stat_REG_ptr_Framework_WriteQueForThreadAt_InputPerihperalSamples;
		while (stat_CLASS_get_ptr_Framework() != nullptr) {}
	}
	else {
		stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::app_FUNCT_write_End(unsigned char* bytes)
{
	if (stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::app_FUNCT_write_Start(unsigned char* bytes)
{
	if (stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(stat_CLASS_get_ptr_Framework(), CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global::stat_CONVERT_ByteArray_To_uint8_t(bytes));
	}
	else {
		stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[4] = false;
		stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_app_FUNCT_Calc_IsAllINSTANTIATED()
{
	stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_ptr_Framework_WriteQueForThreadAt_InputPerihperalSamples); memberFunctionId++)
	{
		if (stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_boot1_CLASS_DEFINE_Framework()
{
	_stat_REG_ptr_Framework_WriteQueForThreadAt_InputPerihperalSamples = NULL;
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_boot3_CLASS_INITIALISE_Framework()
{
	_stat_REG_ptr_Framework_WriteQueForThreadAt_InputPerihperalSamples = new class WriteQueForThreadAt_InputPerihperalSamples_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_get_ptr_Framework()
{
	return _stat_REG_ptr_Framework_WriteQueForThreadAt_InputPerihperalSamples;
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_REG_boot1_DEFINE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()
{
	_stat_REG_flag_isMemberFunctionINSTANTIATED = new bool[5]();
	while (stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_REG_boot3_INITIALISE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtClientInputSend::CLIB_WriteQueForThreadAt_InputPerihperalSamples::stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED()
{
	return _stat_REG_flag_isMemberFunctionINSTANTIATED;
}