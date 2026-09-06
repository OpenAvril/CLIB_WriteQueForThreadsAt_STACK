#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientUserInput_WRITEENABLEFORTHREADSAT_ClientUserInput__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientUserInput_WRITEENABLEFORTHREADSAT_ClientUserInput__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ClientUserInput__App.h"
#include "../include/WriteEnableForThreadsAt_ClientUserInput__Global.h"
namespace CLIBWriteQueAtClientUserInput
{
    class WriteEnableForThreadsAt_ClientUserInput__Framework
    {
    public:
        WriteEnableForThreadsAt_ClientUserInput__Framework();
        virtual ~WriteEnableForThreadsAt_ClientUserInput__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientUserInput__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientUserInput__Global_and_Settings();
        WriteEnableForThreadsAt_ClientUserInput__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__App();
        WriteEnableForThreadsAt_ClientUserInput__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__Framework(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserInput__Framework(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__Framework(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ClientUserInput__Framework(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserInput__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserInput__Framework();
    private:
        static WriteEnableForThreadsAt_ClientUserInput__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__Framework__App;
        static WriteEnableForThreadsAt_ClientUserInput__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserInput__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__Global();
        static WriteEnableForThreadsAt_ClientUserInput__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__App();
        static WriteEnableForThreadsAt_ClientUserInput__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__Global();
    };
}
#endif