#ifndef CLIB_WRITEENABLEFORTHREADSAT_STACK_WRITEENABLEFORTHREADSAT_STACK__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_STACK_WRITEENABLEFORTHREADSAT_STACK__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_STACK__App.h"
#include "../include/WriteEnableForThreadsAt_STACK__Global.h"
namespace CLIBWriteQueAtSTACK
{
    class WriteEnableForThreadsAt_STACK__Framework
    {
    public:
        WriteEnableForThreadsAt_STACK__Framework();
        virtual ~WriteEnableForThreadsAt_STACK__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
        WriteEnableForThreadsAt_STACK__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App();
        WriteEnableForThreadsAt_STACK__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_STACK__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_STACK__Framework();
    private:
        static WriteEnableForThreadsAt_STACK__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__Framework__App;
        static WriteEnableForThreadsAt_STACK__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_STACK__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Global();
        static WriteEnableForThreadsAt_STACK__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App();
        static WriteEnableForThreadsAt_STACK__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__Global();
    };
}
#endif