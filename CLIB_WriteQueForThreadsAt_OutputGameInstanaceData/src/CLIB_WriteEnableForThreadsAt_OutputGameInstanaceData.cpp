#include <cstdint>
#include <iostream>
#include "../include/CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData.h"
#include "../include/WriteEnableForThreadsAt_OutputGameInstanaceData__Framework.h"
#include "../include/WriteEnableForThreadsAt_OutputGameInstanaceData__Global.h"
CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_OutputGameInstanaceData;
	bool* _stat_REG_flag_CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__isMemberFunctionINSTANTIATED;
// public.
void* CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_boot1_DEFINE_Framework();
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_boot3_INITIALISE_Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()->dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__Framework(CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()->dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OutputGameInstanaceData__Framework(CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()->dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_OutputGameInstanaceData__Framework(CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework());
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_boot1_DEFINE_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED();
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED();
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED();
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()->dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_OutputGameInstanaceData__Framework(CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework());
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
	return (void*)CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework();
}
unsigned char* CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_FUNCT_get_flag_isPGM_INSTANTIATED()
{
	if (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[1] == false) {
		return WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbBoolean_To_MsbByteArray(CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[0]);
	}
	else {
		CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[1] = false;
		return WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbBoolean_To_MsbByteArray(true);
	}
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_FUNCT_terminate_Program()
{
	if (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[2] == false) {
		delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_OutputGameInstanaceData;
		while (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework() != nullptr) {}
	}
	else {
		CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[2] = false;
	}

}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_FUNCT_write_End(unsigned char* bytes)
{
	if (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[3] == false) {
		CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__App()->dyn_APP_FUNCT_write_End(CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_Msbuint8_t(bytes));
	}
	else {
		CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[3] = false;
	}
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_FUNCT_write_Start(unsigned char* bytes)
{
	if (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[4] == false) {
		CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__App()->dyn_APP_FUNCT_write_Start(CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_OutputGameInstanaceData__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_OutputGameInstanaceData__MsbByteArray_To_Msbuint8_t(bytes));
	}
	else {
		CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[4] = false;
		CLIB_WriteEnableForThreadsAt_ServerOutputSend__dyn_APP_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
	}
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_ServerOutputSend__dyn_APP_FUNCT_Calc_IsAllINSTANTIATED()
{
	CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_ptr_Framework_WriteEnableForThreadsAt_OutputGameInstanaceData); memberFunctionId++)
	{
		if (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()[0] = true;
		}
	}
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_boot1_DEFINE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_OutputGameInstanaceData = NULL;
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_boot3_INITIALISE_Framework()
{
	_stat_REG_ptr_Framework_WriteEnableForThreadsAt_OutputGameInstanaceData = new class CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Framework();
	while (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework() == NULL) {}
}
CLIBWriteQueAtOutputGameInstanaceData::WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_CLASS_get_ptr_Framework()
{
	return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_OutputGameInstanaceData;
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_boot1_DEFINE_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()
{
	_stat_REG_flag_CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__isMemberFunctionINSTANTIATED = NULL;
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()
{
	_stat_REG_flag_CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__isMemberFunctionINSTANTIATED = new bool[5]();
	while (CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__isMemberFunctionINSTANTIATED[index] = true;
	}
}
void CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* CLIBWriteQueAtOutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData::CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__stat_REG_get_CLIBLaunchQueAtOutputGameInstanaceData_isFlagINSTANTIATED()
{
	return _stat_REG_flag_CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__isMemberFunctionINSTANTIATED;
}