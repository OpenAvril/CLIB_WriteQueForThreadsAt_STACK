#include "../include/WriteEnableForThreadsAt_ClientOutputReceive__App.h"
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive__Control.h"
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive__Framework.h"
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive__Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__Control* CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::_stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control;
    CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::WriteEnableForThreadsAt_ClientOutputReceive__App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive__App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App();
    }
    CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::~WriteEnableForThreadsAt_ClientOutputReceive__App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive__App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App__Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App__Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive__App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive__App(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive()" << std::endl;
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientOutputReceive__App(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global()->dyn_REG_get_WriteEnableForThreadsAt_ClientOutputReceive__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ClientOutputReceive__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ClientOutputReceive__2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global()->dyn_REG_get_WriteEnableForThreadsAt_ClientOutputReceive__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ClientOutputReceive__Control__writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_ClientOutputReceive__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__Control* CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control();
    }

    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control = nullptr;
    }

    void CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control = new class CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control() == nullptr) {}
    }
    CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__Control* CLIBWriteQueAtClientOutputReceive::WriteEnableForThreadsAt_ClientOutputReceive__App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control;
    }