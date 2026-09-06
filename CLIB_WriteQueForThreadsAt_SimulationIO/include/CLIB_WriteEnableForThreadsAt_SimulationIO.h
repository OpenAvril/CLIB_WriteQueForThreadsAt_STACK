#ifndef CLIB_WRITEENABLEFORTHREADSAT_SimulationIO_H
#define CLIB_WRITEENABLEFORTHREADSAT_SimulationIO_H
#include "../include/WriteEnableForThreadsAt_SimulationIO__Framework.h"
extern "C" {
    namespace CLIBWriteQueAtSimulationIO {
        class CLIB_WriteEnableForThreadsAt_SimulationIO {
        public:
            static void* CLIB_WriteEnableForThreadsAt_SimulationIO__App_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_SimulationIO__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__App_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__App_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__App_FUNCT_write_Start(unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_SimulationIO__stat_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__stat_CLASS_boot1_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_SimulationIO__Framework* CLIB_WriteEnableForThreadsAt_SimulationIO__stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__stat_REG_boot1_DEFINE_CLIBLaunchQueAtSimulationIO_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtSimulationIO_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_SimulationIO__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtSimulationIO_isFLAGINSTANTIATED();
            static bool* CLIB_WriteEnableForThreadsAt_SimulationIO__stat_REG_get_CLIBLaunchQueAtSimulationIO_isFLAGINSTANTIATED();
        };
    }
}
#endif
