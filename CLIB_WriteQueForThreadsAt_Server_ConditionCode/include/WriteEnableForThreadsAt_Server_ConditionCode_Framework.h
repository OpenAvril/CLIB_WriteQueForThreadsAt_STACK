#ifndef CLIB_WRITEENABLEFORTHREADSAT_Server_ConditionCode_WRITEENABLEFORTHREADSAT_Server_ConditionCode__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_Server_ConditionCode_WRITEENABLEFORTHREADSAT_Server_ConditionCode__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_Server_ConditionCode__App.h"
#include "../include/WriteEnableForThreadsAt_Server_ConditionCode__Global.h"
namespace CLIBWriteQueAtServer_ConditionCode
{
    class WriteEnableForThreadsAt_Server_ConditionCode_Framework
    {
    public:
        WriteEnableForThreadsAt_Server_ConditionCode_Framework();
        virtual ~WriteEnableForThreadsAt_Server_ConditionCode_Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
        WriteEnableForThreadsAt_Server_ConditionCode__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_ConditionCode__App();
        WriteEnableForThreadsAt_Server_ConditionCode__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_ConditionCode__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_ConditionCode__Framework(WriteEnableForThreadsAt_Server_ConditionCode_Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_ConditionCode__Framework(WriteEnableForThreadsAt_Server_ConditionCode_Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_ConditionCode__Framework(WriteEnableForThreadsAt_Server_ConditionCode_Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_Server_ConditionCode__Framework(WriteEnableForThreadsAt_Server_ConditionCode_Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_ConditionCode__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_ConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_ConditionCode__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_ConditionCode__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_ConditionCode__Framework();
    private:
        static WriteEnableForThreadsAt_Server_ConditionCode__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_ConditionCode__Framework__App;
        static WriteEnableForThreadsAt_Server_ConditionCode__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_ConditionCode__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_ConditionCode__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_ConditionCode__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_ConditionCode__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_ConditionCode__Global();
        static WriteEnableForThreadsAt_Server_ConditionCode__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_ConditionCode__App();
        static WriteEnableForThreadsAt_Server_ConditionCode__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_ConditionCode__Global();
    };
}
#endif