#ifndef CLIB_WRITEENABLEFORTHREADSAT_ConditionCode_WRITEENABLEFORTHREADSAT_ConditionCode__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ConditionCode_WRITEENABLEFORTHREADSAT_ConditionCode__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_ConditionCode__Global.h"
#include "../include/WriteEnableForThreadsAt_ConditionCode__Framework.h"
namespace CLIBWriteQueAtConditionCode
{
    class WriteEnableForThreadsAt_ConditionCode__Framework
    {
    public:
        WriteEnableForThreadsAt_ConditionCode__Framework();
        virtual ~WriteEnableForThreadsAt_ConditionCode__Framework();
        WriteEnableForThreadsAt_ConditionCode__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__App();
        WriteEnableForThreadsAt_ConditionCode__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__Framework(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ConditionCode__Framework(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__Framework(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ConditionCode__Framework(WriteEnableForThreadsAt_ConditionCode__Framework* obj);
    private:
        static WriteEnableForThreadsAt_ConditionCode__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__App;
        static WriteEnableForThreadsAt_ConditionCode__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ConditionCode__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ConditionCode__Global();
        static WriteEnableForThreadsAt_ConditionCode__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__App();
        static WriteEnableForThreadsAt_ConditionCode__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ConditionCode__Global();
    };
}
#endif