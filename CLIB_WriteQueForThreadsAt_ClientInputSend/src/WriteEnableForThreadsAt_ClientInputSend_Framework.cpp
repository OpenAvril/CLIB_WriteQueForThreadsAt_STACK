#include "../include/WriteEnableForThreadsAt_ClientInputSend_Framework.h"
#include <iostream>
#include "../include/WriteEnableForThreadsAt_ClientInputSend.h"
#include "../include/WriteEnableForThreadsAt_ClientInputSend_Control.h"
#include "../include/WriteEnableForThreadsAt_ClientInputSend_Global.h"
	CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::WriteEnableForThreadsAt_ClientInputSend_Framework()
	{
		boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework();
		boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework();
		boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework();
		boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework();
	}
	CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::~WriteEnableForThreadsAt_ClientInputSend_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework()" << std::endl;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend* CLIBWriteQueAtClientInputSend::WriteEnableForThreadsAt_ClientInputSend_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}