#ifndef CLIB_WriteEnableForThreadsAt_ConditionCode__App_WriteEnableForThreadsAt_ConditionCode__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ConditionCode__App_WriteEnableForThreadsAt_ConditionCode__App__APP_H
#include "../include/WriteEnableForThreadsAt_ConditionCode__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtConditionCode
{
    class WriteEnableForThreadsAt_ConditionCode__App
    {
    public:
        WriteEnableForThreadsAt_ConditionCode__App();
        virtual ~WriteEnableForThreadsAt_ConditionCode__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ConditionCode__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ConditionCode__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__App(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ConditionCode__App(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__App(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ConditionCode__App(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ConditionCode__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ConditionCode__App();
    private:
        static WriteEnableForThreadsAt_ConditionCode__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ConditionCode__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__App__Control();
        static WriteEnableForThreadsAt_ConditionCode__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__App__Control();
    };
}
#endif
