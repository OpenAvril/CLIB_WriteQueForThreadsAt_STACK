#include "../include/WriteQueForThreadAt_OutputGameInstanaceData.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <ostream>
#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Control.h"
#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Framework.h"
#include "../include/WriteQueForThreadAt_OutputGameInstanaceData_Global.h"
class CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::_stat_CLASS_ptr_Global = NULL;
    class CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Control* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData()
    {
        boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData();
        boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData();
        boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData();
    }
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::~WriteQueForThreadAt_OutputGameInstanaceData()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData(CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData(CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData(CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData()" << std::endl;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::boot4_PGM_INSTANTIATION_WriteQueForThreadAt_OutputGameInstanaceData(CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::dyn_app_FUNCT_write_End(CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_ptr_CONST_2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::dyn_app_FUNCT_write_Start(CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Control* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Global* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData_Control* CLIBWriteQueAtOutputGameInstanaceData::WriteQueForThreadAt_OutputGameInstanaceData::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }