#ifndef CLIB_WriteEnableForThreadsAt_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtClientOutputReceive
    {
        class WriteEnableForThreadsAt_ClientOutputReceive_Framework
        {
        public:

            WriteEnableForThreadsAt_ClientOutputReceive_Framework();
            virtual ~WriteEnableForThreadsAt_ClientOutputReceive_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientOutputReceive_Framework(WriteEnableForThreadsAt_ClientOutputReceive_Framework* obj);
            class WriteEnableForThreadsAt_ClientOutputReceive* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteEnableForThreadsAt_ClientOutputReceive* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive();
            static WriteEnableForThreadsAt_ClientOutputReceive* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif