#ifndef CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_InputSamples_H
#define CLIB_WRITEENABLEFORTHREADSAT_SIMULATION_InputSamples_H
#include "../include/WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework.h"
extern "C"
{
    namespace CLIBWriteQueAtSIMULATION_InputSamples
    {
        class CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples
        {
        public:

            static void* CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_set_flag_isCurrentThreadRELEASED(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__App_FUNCT_write_Start(unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_App_FUNCT_set_flag_isCurrentThreadRELEASED(bool bytes);
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_boot1_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_SIMULATION_InputSamples__Framework* CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
            static bool* CLIB_WriteEnableForThreadsAt_SIMULATION_InputSamples__stat_REG_get_CLIBLaunchQueAtSIMULATION_InputSamples_isFlagINSTANTIATED();
        };
    }
}
#endif
