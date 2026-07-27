#ifndef CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_OutputSamples_H
#define CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_OutputSamples_H
#include "../include/WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework.h"
extern "C"
{
    namespace CLIBWriteQueAtSIMULATION_OutputSamples
    {
        class CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples
        {
        public:
            static void* CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App_FUNCT_set_flag_isCurrentThreadRELEASED(bool flagState);
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__App_FUNCT_write_Start(unsigned char* bytes);
        private:
		    static void CLIB_WriteEnableForThreadsAt_STACK__dyn_APP_FUNCT_set_IsThreadReleased();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__dyn_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_CLASS_boot1_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_SIMULATION_OutputSamples__Framework* CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSIMULATION_OutputSamples_isFlagINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSIMULATION_OutputSamples_isFlagINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSIMULATION_OutputSamples_isFlagINSTANTIATED();
            static bool* CLIB_WriteEnableForThreadsAt_SIMULATION_OutputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_OutputSamples_isFlagINSTANTIATED();
        };
    }
}
#endif
