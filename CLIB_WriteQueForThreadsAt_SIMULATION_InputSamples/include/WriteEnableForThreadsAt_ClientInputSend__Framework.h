#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientInputSend_WRITEENABLEFORTHREADSAT_ClientInputSend__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientInputSend_WRITEENABLEFORTHREADSAT_ClientInputSend__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_ClientInputSend__App.h"
#include "../include/WriteEnableForThreadsAt_ClientInputSend__Global.h"
#include "../include/WriteEnableForThreadsAt_ClientInputSend__Framework.h"
namespace CLIBWriteQueAtClientInputSend
{
    class WriteEnableForThreadsAt_ClientInputSend__Framework
    {
    public:
        WriteEnableForThreadsAt_ClientInputSend__Framework();
        virtual ~WriteEnableForThreadsAt_ClientInputSend__Framework();
        WriteEnableForThreadsAt_ClientInputSend__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientInputSend__App();
        WriteEnableForThreadsAt_ClientInputSend__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientInputSend__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend__Framework(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend__Framework(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend__Framework(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientInputSend__Framework(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
    private:
        static WriteEnableForThreadsAt_ClientInputSend__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientInputSend__App;
        static WriteEnableForThreadsAt_ClientInputSend__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientInputSend__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend__Global();
        static WriteEnableForThreadsAt_ClientInputSend__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientInputSend__App();
        static WriteEnableForThreadsAt_ClientInputSend__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientInputSend__Global();
    };
}
#endif