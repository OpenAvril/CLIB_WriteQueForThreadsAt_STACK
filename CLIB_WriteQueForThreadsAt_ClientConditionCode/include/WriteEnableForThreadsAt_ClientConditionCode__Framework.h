#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientConditionCode_WRITEENABLEFORTHREADSAT_ClientConditionCode__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientConditionCode_WRITEENABLEFORTHREADSAT_ClientConditionCode__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ClientConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_ClientConditionCode__Global.h"
namespace CLIBWriteQueAtClientConditionCode
{
    class WriteEnableForThreadsAt_ClientConditionCode__Framework
    {
    public:
        WriteEnableForThreadsAt_ClientConditionCode__Framework();
        virtual ~WriteEnableForThreadsAt_ClientConditionCode__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientConditionCode__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientConditionCode__Global_and_Settings();
        WriteEnableForThreadsAt_ClientConditionCode__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__App();
        WriteEnableForThreadsAt_ClientConditionCode__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__Framework(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientConditionCode__Framework(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__Framework(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ClientConditionCode__Framework(WriteEnableForThreadsAt_ClientConditionCode__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientConditionCode__Framework();
    private:
        static WriteEnableForThreadsAt_ClientConditionCode__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__Framework__App;
        static WriteEnableForThreadsAt_ClientConditionCode__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientConditionCode__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientConditionCode__Global();
        static WriteEnableForThreadsAt_ClientConditionCode__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__App();
        static WriteEnableForThreadsAt_ClientConditionCode__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientConditionCode__Global();
    };
}
#endif