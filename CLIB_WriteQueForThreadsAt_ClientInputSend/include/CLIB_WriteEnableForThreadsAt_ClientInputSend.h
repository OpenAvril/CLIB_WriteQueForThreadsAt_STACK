#ifndef CLIB_WriteEnableForThreadsAt_ClientInputSend_CLIB_WRITEENABLEFORTHREADSAT_ClientInputSend_H
#define CLIB_WriteEnableForThreadsAt_ClientInputSend_CLIB_WRITEENABLEFORTHREADSAT_ClientInputSend_H
extern "C"
{
    namespace CLIBWriteQueAtClientInputSend
    {
        class CLIB_WriteEnableForThreadsAt_ClientInputSend
        {
        public:
            static void* app_FUNCT_generate_Program();
            static unsigned char* app_FUNCT_get_flag_isPGM_INSTANTIATED();
            static void app_FUNCT_terminate_Program();
            static void app_FUNCT_write_End(unsigned char* bytes);
            static void app_FUNCT_write_Start(unsigned char* bytes);
        private:
            static void stat_app_FUNCT_Calc_IsAllINSTANTIATED();
            static void stat_boot1_CLASS_DEFINE_Framework();
            static void stat_boot3_CLASS_INITIALISE_Framework();
            static class WriteEnableForThreadsAt_ClientInputSend_Framework* stat_CLASS_get_ptr_Framework();
            static void stat_REG_boot1_DEFINE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
            static void stat_REG_boot2_SUBSTANTIATE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
            static void stat_REG_boot3_INITIALISE_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
            static bool* stat_REG_get_CLIBLaunchQueAtClientInputSend_isFlagINSTANTIATED();
        };
    }
}
#endif
