#ifndef CLIB_WriteEnableForThreadsAt_STACK_WRITEENABLEFORTHREADSAT_STACK_H
#define CLIB_WriteEnableForThreadsAt_STACK_WRITEENABLEFORTHREADSAT_STACK_H
#include <cstdint>
extern "C"
{
    namespace CLIBWriteQueAtSTACK
    {
        class WriteEnableForThreadsAt_STACK
        {
        public:
            WriteEnableForThreadsAt_STACK();
            virtual ~WriteEnableForThreadsAt_STACK();
            static void boot0_CLASS_DECLARE_WriteEnableForThreadsAt_STACK();
            static void boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK();
            static void boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK();
            static void boot0_REG_DECLARE_WriteEnableForThreadsAt_STACK();
            void boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
            void boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
            void dyn_app_FUNCT_write_End(WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
            void dyn_app_FUNCT_write_Start(WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
            class WriteEnableForThreadsAt_STACK_Global* dyn_CLASS_get_ptr_Global();
            class WriteEnableForThreadsAt_STACK_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        private:
            static class WriteEnableForThreadsAt_STACK_Global* _stat_CLASS_ptr_Global;
            static class WriteEnableForThreadsAt_STACK_Control* _stat_CLASS_ptr_WriteEnable_Control;
            static void stat_CLASS_boot1_DEFINE_Global();
            static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
            static void stat_CLASS_boot3_INITIALISE_Global();
            static void stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
            static WriteEnableForThreadsAt_STACK_Global* stat_CLASS_get_ptr_Global();
            static WriteEnableForThreadsAt_STACK_Control* stat_CLASS_get_ptr_WriteEnable_Control();
        };
    }
}
#endif
