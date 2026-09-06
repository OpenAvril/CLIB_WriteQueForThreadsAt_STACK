#ifndef CLIB_WRITEENABLEFORTHREADSAT_SimulationIO_WRITEENABLEFORTHREADSAT_SimulationIO__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_SimulationIO_WRITEENABLEFORTHREADSAT_SimulationIO__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_SimulationIO__App.h"
#include "../include/WriteEnableForThreadsAt_SimulationIO__Global.h"
namespace CLIBWriteQueAtSimulationIO
{
    class WriteEnableForThreadsAt_SimulationIO__Framework
    {
    public:
        WriteEnableForThreadsAt_SimulationIO__Framework();
        virtual ~WriteEnableForThreadsAt_SimulationIO__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_SimulationIO__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_SimulationIO__Global_and_Settings();
        WriteEnableForThreadsAt_SimulationIO__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App();
        WriteEnableForThreadsAt_SimulationIO__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__Framework(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SimulationIO__Framework(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__Framework(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_SimulationIO__Framework(WriteEnableForThreadsAt_SimulationIO__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_SimulationIO__Framework();
    private:
        static WriteEnableForThreadsAt_SimulationIO__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__Framework__App;
        static WriteEnableForThreadsAt_SimulationIO__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_SimulationIO__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SimulationIO__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SimulationIO__Global();
        static WriteEnableForThreadsAt_SimulationIO__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__App();
        static WriteEnableForThreadsAt_SimulationIO__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SimulationIO__Global();
    };
}
#endif