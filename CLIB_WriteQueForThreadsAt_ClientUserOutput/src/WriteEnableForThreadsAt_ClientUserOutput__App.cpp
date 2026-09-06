#include "../include/WriteEnableForThreadsAt_ClientUserOutput__App.h"
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__Control.h"
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__Framework.h"
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__Control* CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::_stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control;
    CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::WriteEnableForThreadsAt_ClientUserOutput__App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App();
    }
    CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::~WriteEnableForThreadsAt_ClientUserOutput__App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput()" << std::endl;
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__Global()->dyn_REG_get_WriteEnableForThreadsAt_ClientUserOutput__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ClientUserOutput__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ClientUserOutput__2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__Global()->dyn_REG_get_WriteEnableForThreadsAt_ClientUserOutput__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientUserOutput__Control__writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientUserOutput__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__Control* CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
    }

    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control = nullptr;
    }

    void CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control = new class CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control() == nullptr) {}
    }
    CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__Control* CLIBWriteQueAtClientUserOutput::WriteEnableForThreadsAt_ClientUserOutput__App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control;
    }