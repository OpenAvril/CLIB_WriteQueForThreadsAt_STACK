#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientUserOutput_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientUserOutput_H
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__Framework.h"
extern "C" {
    namespace CLIBWriteQueAtClientUserOutput {
        class CLIB_WriteEnableForThreadsAt_ClientUserOutput {
        public:
            static void* CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_FUNCT_write_Start(unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_CLASS_boot1_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_ClientUserOutput__Framework* CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_REG_boot1_DEFINE_CLIBLaunchQueAtClientUserOutput_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtClientUserOutput_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtClientUserOutput_isFLAGINSTANTIATED();
            static bool* CLIB_WriteEnableForThreadsAt_ClientUserOutput__stat_REG_get_CLIBLaunchQueAtClientUserOutput_isFLAGINSTANTIATED();
        };
    }
}
#endif
