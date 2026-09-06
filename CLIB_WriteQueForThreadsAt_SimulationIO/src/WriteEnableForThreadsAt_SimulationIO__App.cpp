#include "../include/WriteEnableForThreadsAt_SimulationIO__App.h"
#include "../include/WriteEnableForThreadsAt_SimulationIO__Control.h"
#include "../include/WriteEnableForThreadsAt_SimulationIO__Framework.h"
#include "../include/WriteEnableForThreadsAt_SimulationIO__Global.h"
#include <cstdint>
#include <iostream>
#include <ostream>
    CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__Control* CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::_stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control;
    CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::WriteEnableForThreadsAt_SimulationIO__App()
    {
        CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__App();
        CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App();
        CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App();
    }
    CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::~WriteEnableForThreadsAt_SimulationIO__App()
    {
        delete _stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__App()
    {
        std::cout << "entered CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;

        std::cout << "exiting CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO" << std::endl;
        stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App__Control();
        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
        stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App__Control();
        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::REG_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__App()
    {
        std::cout << "entered REG_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;

        std::cout << "exiting REG_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::REG_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj)
    {
        std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;

        std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj)
    {
        std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;

        std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::REG_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj)
    {
        std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;

        std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO()" << std::endl;
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_SimulationIO__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteEndThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteEndThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteEndThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteEndThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteEndThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteEndThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__Global()->dyn_REG_get_WriteEnableForThreadsAt_SimulationIO__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteEndThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_SimulationIO__Control__2ibt_FLAG_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_SimulationIO__2bitFLAG_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_SimulationIO__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteStartThreadRELASE_ONE()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__dynamicIn(obj, coreId);
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteStartThreadRELASE_ONE(false);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteStartThreadRELASE_ONE(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteStartThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteStartThreadId_Index()+1);
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_get_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteStartThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__Global()->dyn_REG_get_WriteEnableForThreadsAt_SimulationIO__number_Of_Implemented_Threads()) {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__writeCycle_Try_WriteStartThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_SimulationIO__Control__writeEnable_Activate(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()->dyn_REG_set_FLAG_WriteEnableForThreadsAt_SimulationIO__Control__isWriteStartThreadRELASE_REMAINING(true);
    }
    CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__Control* CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()
    {
        return stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control();
    }

    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control = nullptr;
    }

    void CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App__Control()
    {
        _stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control = new class CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__Control();
        while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control() == nullptr) {}
    }
    CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__Control* CLIBWriteQueAtSimulationIO::WriteEnableForThreadsAt_SimulationIO__App::stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control()
    {
        return _stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control;
    }