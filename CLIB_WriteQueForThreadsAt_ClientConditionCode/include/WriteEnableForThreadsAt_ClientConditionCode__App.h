#ifndef CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_WriteEnableForThreadsAt_ClientConditionCode__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ClientConditionCode__App_WriteEnableForThreadsAt_ClientConditionCode__App__APP_H
#include "../include/WriteEnableForThreadsAt_ClientConditionCode__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtClientConditionCode
{
    class WriteEnableForThreadsAt_ClientConditionCode__App
    {
    public:
        WriteEnableForThreadsAt_ClientConditionCode__App();
        virtual ~WriteEnableForThreadsAt_ClientConditionCode__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ClientConditionCode__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__App(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientConditionCode__App(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__App(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientConditionCode__App(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientConditionCode__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientConditionCode__App();
    private:
        static WriteEnableForThreadsAt_ClientConditionCode__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientConditionCode__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__App__Control();
        static WriteEnableForThreadsAt_ClientConditionCode__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__App__Control();
    };
}
#endif
