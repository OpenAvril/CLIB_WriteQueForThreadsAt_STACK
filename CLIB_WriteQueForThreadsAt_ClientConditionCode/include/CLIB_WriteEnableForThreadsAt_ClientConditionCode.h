#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientConditionCode_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientConditionCode_H
#include "../include/WriteEnableForThreadsAt_ClientConditionCode__Framework.h"
extern "C" {
    namespace CLIBWriteQueAtClientConditionCode {
        class CLIB_WriteEnableForThreadsAt_ClientConditionCode {
        public:
            static void* CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_FUNCT_generate_Program();
            static unsigned char* CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_FUNCT_get_FLAG_isPGM_INSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_FUNCT_terminate_Program();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_FUNCT_write_End(unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_FUNCT_write_Start(unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_APP_FUNCT_Calc_IsAllINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_CLASS_boot1_DEFINE_Framework();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_CLASS_boot3_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_ClientConditionCode__Framework* CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_CLASS_get_ptr_Framework();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_REG_boot1_DEFINE_CLIBLaunchQueAtClientConditionCode_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtClientConditionCode_isFLAGINSTANTIATED();
            static void CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_REG_boot3_INITIALISE_CLIBLaunchQueAtClientConditionCode_isFLAGINSTANTIATED();
            static bool* CLIB_WriteEnableForThreadsAt_ClientConditionCode__stat_REG_get_CLIBLaunchQueAtClientConditionCode_isFLAGINSTANTIATED();
        };
    }
}
#endif
