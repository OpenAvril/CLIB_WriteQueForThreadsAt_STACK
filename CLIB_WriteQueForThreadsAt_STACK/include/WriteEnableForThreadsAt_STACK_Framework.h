#ifndef CLIB_WriteEnableForThreadsAt_STACK_WRITEENABLEFORTHREADSAT_STACK_FRAMEWORK_H
#define CLIB_WriteEnableForThreadsAt_STACK_WRITEENABLEFORTHREADSAT_STACK_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtSTACK
    {
        class WriteEnableForThreadsAt_STACK_Framework
        {
        public:

            WriteEnableForThreadsAt_STACK_Framework();
            virtual ~WriteEnableForThreadsAt_STACK_Framework();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK_Framework();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK_Framework();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK_Framework(WriteEnableForThreadsAt_STACK_Framework* obj);
            class WriteEnableForThreadsAt_STACK* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteEnableForThreadsAt_STACK* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK();
            static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK();
            static WriteEnableForThreadsAt_STACK* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif