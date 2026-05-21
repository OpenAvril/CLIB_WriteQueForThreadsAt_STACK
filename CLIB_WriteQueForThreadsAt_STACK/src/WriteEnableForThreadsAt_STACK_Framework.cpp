#include "../include/WriteEnableForThreadsAt_STACK_Framework.h"
#include <iostream>
#include "../include/WriteEnableForThreadsAt_STACK.h"
#include "../include/WriteEnableForThreadsAt_STACK_Control.h"
#include "../include/WriteEnableForThreadsAt_STACK_Global.h"
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
	{
		boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Framework();
		boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework();
		boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework();
		boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Framework();
	}
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()" << std::endl;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK* CLIBWriteQueAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}