#ifndef CLIB_WriteEnableForThreadsAt_ClientInputSend_WRITEENABLEFORTHREADSAT_ClientInputSend_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_ClientInputSend_WRITEENABLEFORTHREADSAT_ClientInputSend_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtClientInputSend
    {
        class WriteEnableForThreadsAt_ClientInputSend_Framework
        {
        public:

            WriteEnableForThreadsAt_ClientInputSend_Framework();
            virtual ~WriteEnableForThreadsAt_ClientInputSend_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientInputSend_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientInputSend_Framework(WriteEnableForThreadsAt_ClientInputSend_Framework* obj);
            class WriteEnableForThreadsAt_ClientInputSend* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteEnableForThreadsAt_ClientInputSend* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend();
            static WriteEnableForThreadsAt_ClientInputSend* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif