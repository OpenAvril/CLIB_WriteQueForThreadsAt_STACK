#include "../include/WriteQueForThreadAt_InputPerihperalSamples.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <ostream>
#include "../include/WriteQueForThreadAt_InputPerihperalSamples_Control.h"
#include "../include/WriteQueForThreadAt_InputPerihperalSamples_Framework.h"
#include "../include/WriteQueForThreadAt_InputPerihperalSamples_Global.h"
class CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global* CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::_stat_CLASS_ptr_Global = NULL;
    class CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Control* CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::WriteQueForThreadAt_InputPerihperalSamples()
    {
        boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples();
        boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples();
        boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples();
    }
    CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::~WriteQueForThreadAt_InputPerihperalSamples()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples()
    {
        std::cout << "entered boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;

        std::cout << "exiting boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples()
    {
        std::cout << "entered boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples" << std::endl;
        stat_CLASS_boot1_DEFINE_Global();
        stat_CLASS_boot1_DEFINE_WriteEnable_Control();
        std::cout << "exiting boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples()
    {
        std::cout << "entered boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
        stat_CLASS_boot3_INITIALISE_Global();
        stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
        std::cout << "exiting boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot0_REG_DECLARE_WriteQueForThreadAt_InputPerihperalSamples()
    {
        std::cout << "entered boot0_REG_DECLARE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;

        std::cout << "exiting boot0_REG_DECLARE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples(CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* obj)
    {
        std::cout << "entered boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;

        std::cout << "exiting boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples(CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* obj)
    {
        std::cout << "entered boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;

        std::cout << "exiting boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples(CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* obj)
    {
        std::cout << "entered boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;

        std::cout << "exiting boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples()" << std::endl;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::boot4_PGM_INSTANTIATION_WriteQueForThreadAt_InputPerihperalSamples(CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::dyn_app_FUNCT_write_End(CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* obj, uint8_t coreId)
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
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::dyn_app_FUNCT_write_Start(CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_FUNCT_writeEnable_Activate(obj, coreId);
    }
    CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global* CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Control* CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_boot1_DEFINE_Global()
    {
        _stat_CLASS_ptr_Global = NULL;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_boot1_DEFINE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = NULL;
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_boot3_INITIALISE_Global()
    {
        _stat_CLASS_ptr_Global = new class CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_boot3_INITIALISE_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Global* CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples_Control* CLIBWriteQueAtClientInputSend::WriteQueForThreadAt_InputPerihperalSamples::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }