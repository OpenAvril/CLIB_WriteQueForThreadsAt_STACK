#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive__App.h"
#include "../include/WriteEnableForThreadsAt_ClientOutputReceive__Global.h"
namespace CLIBWriteQueAtClientOutputReceive
{
    class WriteEnableForThreadsAt_ClientOutputReceive__Framework
    {
    public:
        WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        virtual ~WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientOutputReceive__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_ClientOutputReceive__Global_and_Settings();
        WriteEnableForThreadsAt_ClientOutputReceive__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App();
        WriteEnableForThreadsAt_ClientOutputReceive__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive__Framework();
    private:
        static WriteEnableForThreadsAt_ClientOutputReceive__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Framework__App;
        static WriteEnableForThreadsAt_ClientOutputReceive__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        static WriteEnableForThreadsAt_ClientOutputReceive__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App();
        static WriteEnableForThreadsAt_ClientOutputReceive__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global();
    };
}
#endif