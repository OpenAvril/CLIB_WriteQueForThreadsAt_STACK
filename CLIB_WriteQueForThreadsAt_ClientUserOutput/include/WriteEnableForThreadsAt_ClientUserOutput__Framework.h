#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientUserOutput_WRITEENABLEFORTHREADSAT_ClientUserOutput__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientUserOutput_WRITEENABLEFORTHREADSAT_ClientUserOutput__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__App.h"
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__Global.h"
namespace CLIBWriteQueAtClientUserOutput
{
    class WriteEnableForThreadsAt_ClientUserOutput__Framework
    {
    public:
        WriteEnableForThreadsAt_ClientUserOutput__Framework();
        virtual ~WriteEnableForThreadsAt_ClientUserOutput__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientUserOutput__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientUserOutput__Global_and_Settings();
        WriteEnableForThreadsAt_ClientUserOutput__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App();
        WriteEnableForThreadsAt_ClientUserOutput__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__Framework(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserOutput__Framework(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__Framework(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ClientUserOutput__Framework(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__Framework();
    private:
        static WriteEnableForThreadsAt_ClientUserOutput__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__Framework__App;
        static WriteEnableForThreadsAt_ClientUserOutput__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__Global();
        static WriteEnableForThreadsAt_ClientUserOutput__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App();
        static WriteEnableForThreadsAt_ClientUserOutput__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__Global();
    };
}
#endif