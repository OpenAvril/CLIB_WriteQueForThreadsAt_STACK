#ifndef CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_OutputSamples_WRITEENABLEFORTHREADSAT_SIMULATION_OutputSamples__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_OutputSamples_WRITEENABLEFORTHREADSAT_SIMULATION_OutputSamples__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__App.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global.h"
#include "../include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework.h"
namespace CLIBWriteQueAtSIMULATION_OutputSamples
{
    class WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework
    {
    public:
        WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework();
        virtual ~WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework();
        WriteEnableForThreadsAt_SIMULATION_OutputSamples__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App();
        WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework(WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework(WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework(WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework(WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework* obj);
    private:
        static WriteEnableForThreadsAt_SIMULATION_OutputSamples__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App;
        static WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global();
        static WriteEnableForThreadsAt_SIMULATION_OutputSamples__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App();
        static WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_SIMULATION_OutputSamples__Global();
    };
}
#endif