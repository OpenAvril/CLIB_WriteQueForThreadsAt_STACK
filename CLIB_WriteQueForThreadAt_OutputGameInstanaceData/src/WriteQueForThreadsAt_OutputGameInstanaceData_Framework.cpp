#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Framework.h"
#include <iostream>
#include "../include/WriteQueForThreadAt_OutputGameInstanaceData.h"
#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Control.h"
#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Global.h"
CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::_stat_CLASS_get_ptr_WriteEnable;
	CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::WriteQueForThreadAt_OutputGameInstanaceData_Framework()
	{
		boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
		boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
		boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
		boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
	}
	CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::~WriteQueForThreadAt_OutputGameInstanaceData_Framework()
	{
		delete _stat_CLASS_get_ptr_WriteEnable;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()
	{
		std::cout << "entered boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;

		std::cout << "exiting boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()
	{
		std::cout << "entered boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData();
		std::cout << "exiting boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()
	{
		std::cout << "entered boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData();
		std::cout << "exiting boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()
	{
		std::cout << "entered boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;

		std::cout << "exiting boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
	{
		std::cout << "entered boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Control(obj);
		std::cout << "exiting boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
	{
		std::cout << "entered boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Control(obj);
		std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
	{
		std::cout << "entered boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
		obj->dyn_CLASS_get_ptr_WriteEnable()->boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData(obj);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Global();
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Control(obj);
		std::cout << "exiting boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework()" << std::endl;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::boot4_PGM_INSTANTIATION_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
	{
		//if thread primed and system initialised, exit, else wait.
	}
	CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::dyn_CLASS_get_ptr_WriteEnable()
	{
		return stat_CLASS_get_ptr_WriteEnable();
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::stat_CLASS_boot1_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData()
	{
		_stat_CLASS_get_ptr_WriteEnable = nullptr;
	}
	void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::stat_CLASS_boot3_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData()
	{
		_stat_CLASS_get_ptr_WriteEnable = new class CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData();
		while (stat_CLASS_get_ptr_WriteEnable() == nullptr) {}
	}
	CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _stat_CLASS_get_ptr_WriteEnable;
	}