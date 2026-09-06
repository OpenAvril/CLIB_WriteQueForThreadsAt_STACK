#ifndef CLIB_WriteEnableForThreadsAt_SimulationIO__App_WriteEnableForThreadsAt_SimulationIO__App__APP_H
#define CLIB_WriteEnableForThreadsAt_SimulationIO__App_WriteEnableForThreadsAt_SimulationIO__App__APP_H
#include "../include/WriteEnableForThreadsAt_SimulationIO__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtSimulationIO
{
    class WriteEnableForThreadsAt_SimulationIO__App
    {
    public:
        WriteEnableForThreadsAt_SimulationIO__App();
        virtual ~WriteEnableForThreadsAt_SimulationIO__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_SimulationIO__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_SimulationIO__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_SimulationIO__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SimulationIO__App(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__App();
    private:
        static WriteEnableForThreadsAt_SimulationIO__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App__Control();
        static WriteEnableForThreadsAt_SimulationIO__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App__Control();
    };
}
#endif
