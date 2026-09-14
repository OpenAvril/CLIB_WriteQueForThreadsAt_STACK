#ifndef CLIB_WRITEENABLEFORTHREADSAT_DataStack_WRITEENABLEFORTHREADSAT_DataStack__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_DataStack_WRITEENABLEFORTHREADSAT_DataStack__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_DataStack__App.h"
#include "../include/WriteEnableForThreadsAt_DataStack__Global.h"
namespace CLIBWriteQueAtDataStack
{
    class WriteEnableForThreadsAt_DataStack__Framework
    {
    public:
        WriteEnableForThreadsAt_DataStack__Framework();
        virtual ~WriteEnableForThreadsAt_DataStack__Framework();
        void dyn_CLASS_create_WriteEnableForThreadsAt_DataStack__Architecture();
        void dyn_CLASS_create_WriteEnableForThreadsAt_DataStack__Global_and_Settings();
        WriteEnableForThreadsAt_DataStack__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__App();
        WriteEnableForThreadsAt_DataStack__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__Framework(WriteEnableForThreadsAt_DataStack__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_DataStack__Framework(WriteEnableForThreadsAt_DataStack__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Framework(WriteEnableForThreadsAt_DataStack__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_DataStack__Framework(WriteEnableForThreadsAt_DataStack__Framework* obj);
        static void stat_CLASS_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Global();
        static void stat_REG_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__Framework();
    private:
        static WriteEnableForThreadsAt_DataStack__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__Framework__App;
        static WriteEnableForThreadsAt_DataStack__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack__Framework__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__App();
        static void pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__Global();
        static WriteEnableForThreadsAt_DataStack__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__App();
        static WriteEnableForThreadsAt_DataStack__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__Global();
    };
}
#endif