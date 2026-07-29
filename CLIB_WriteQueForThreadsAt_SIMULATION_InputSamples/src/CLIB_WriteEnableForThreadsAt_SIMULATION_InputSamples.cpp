#include "../include/CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_InputSamples__Global.h"
#include <cstdint>
#include <iostream>
#include <span>
	CLIBWriteQueAtSIMULATION_InputSamples::WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework* _stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION_InputSamples;
	bool* _stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED;
// public.
	void* CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_generate_Program()
	{
		std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_boot1_DEFINE_Framework();
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

		std::cout << "started Registers - DEFINE" << std::endl;
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework(CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - DEFINE." << std::endl;

		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework(CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;

		std::cout << "started Registers - INITIALISE." << std::endl;
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework(CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework());
		std::cout << "done Registers - INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
		CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework(CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework());
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
		return (void*)CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework();
	}
	unsigned char* CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_get_flag_isPGM_INSTANTIATED()
	{
		if (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[1] == false) {
			return WriteEnableForThreadsAt_SIMULATION_InputSamples__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_SIMULATION_InputSamples__MsbBoolean_To_MsbByteArray(CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[0]);
		}
		else {
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[1] = false;
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
			return WriteEnableForThreadsAt_SIMULATION_InputSamples__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_SIMULATION_InputSamples__MsbBoolean_To_MsbByteArray(true);
		}
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_terminate_Program()
	{
		if (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[3] == false) {
			delete _stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION_InputSamples;
			while (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework() != nullptr) {}
		}
		else {
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[3] = false;
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
		}
	}

	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_write_End(unsigned char* bytes)
	{
		if (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[4] == false) {
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_InputSamples__App()->dyn_APP_FUNCT_write_End(CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_SIMULATION_InputSamples__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_SIMULATION_InputSamples__MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[4] = false;
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(true);
		}
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_write_Start(unsigned char* bytes)
	{
		if (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[5] == false) {
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_InputSamples__App()->dyn_APP_FUNCT_write_Start(CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework(), WriteEnableForThreadsAt_SIMULATION_InputSamples__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_SIMULATION_InputSamples__MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()[5] = false;
			CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();//INSTANTIATE this member function last.
		}
	}
	bool CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_APP_FUNCT_Calc_IsAllINSTANTIATED() {
		for(int index = 0; index < 5; index++) {
			if (_stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED[index] == false) {
				_stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED[0] = false;
			}
		}
		return *CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(bool bytes) {
		return CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_InputSamples__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_InputSamples__App__Control()->dyn_App_FUNCT_set_flag_isCurrentThreadRELEASED(bytes);
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_boot1_DEFINE_Framework()
	{
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION_InputSamples = NULL;
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_boot3_INITIALISE_Framework()
	{
		_stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION_InputSamples = new class CLIBWriteQueAtSIMULATION_InputSamples::WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework();
		while (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework() == NULL) {}
	}
	CLIBWriteQueAtSIMULATION_InputSamples::WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework* CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework()
	{
		return _stat_REG_ptr_Framework_WriteEnableForThreadsAt_SIMULATION_InputSamples;
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED = NULL;
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()
	{
		_stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED = new bool[5]();
		while (CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED() == NULL) {}
		for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()); index++)
		{
			_stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED[index] = true;
		}
	}
	void CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()
	{
		for (uint8_t index = 0; index < sizeof(*CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()); index++)
		{
			_stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED[index] = true;
		}
	}
	bool* CLIBWriteQueAtSIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples::CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED()
	{
		return _stat_REG_flag_CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__isMemberFunctionINSTANTIATED;
	}