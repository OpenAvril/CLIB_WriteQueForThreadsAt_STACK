#include "../include/WriteEnableForThreadsAt_ClientOutputReceive_Framework.h"
#include <iostream>
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive.h"
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive_Control.h"
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive_Global.h"
CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive* CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::WriteEnableForThreadsAt_ClientOutputReceive_Framework()
	{
		boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
		boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
		boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
		boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
	}
	CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::~WriteEnableForThreadsAt_ClientOutputReceive_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive* CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive* CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}