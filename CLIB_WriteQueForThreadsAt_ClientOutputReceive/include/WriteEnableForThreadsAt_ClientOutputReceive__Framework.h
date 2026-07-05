#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive__FRAMEWORK_H
#include "WriteEnableForThreadsAt_ClientOutputReceive__App.h"
#include "WriteEnableForThreadsAt_ClientOutputReceive__Global.h"
#include "WriteEnableForThreadsAt_ClientOutputReceive__Framework.h"
namespace CLIBWriteQueAtClientOutputReceive
{
    class WriteEnableForThreadsAt_ClientOutputReceive__Framework
    {
    public:
        WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        virtual ~WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        WriteEnableForThreadsAt_ClientOutputReceive__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App();
        WriteEnableForThreadsAt_ClientOutputReceive__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientOutputReceive__Framework(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
    private:
        static WriteEnableForThreadsAt_ClientOutputReceive__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App;
        static WriteEnableForThreadsAt_ClientOutputReceive__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive__Global();
        static WriteEnableForThreadsAt_ClientOutputReceive__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App();
        static WriteEnableForThreadsAt_ClientOutputReceive__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__Global();
    };
}
#endif