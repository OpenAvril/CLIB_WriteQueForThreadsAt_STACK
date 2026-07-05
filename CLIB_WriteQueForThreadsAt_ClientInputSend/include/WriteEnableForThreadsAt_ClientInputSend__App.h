#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientInputSend_WRITEENABLEFORTHREADSAT_ClientInputSend__APP_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientInputSend_WRITEENABLEFORTHREADSAT_ClientInputSend__APP_H
#include "WriteEnableForThreadsAt_ClientInputSend__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtClientInputSend
{
    class WriteEnableForThreadsAt_ClientInputSend__App
    {
    public:
        WriteEnableForThreadsAt_ClientInputSend__App();
        virtual ~WriteEnableForThreadsAt_ClientInputSend__App();
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientInputSend();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientInputSend();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientInputSend(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientInputSend(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientInputSend(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientInputSend(WriteEnableForThreadsAt_ClientInputSend__Framework* obj);
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientInputSend__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientInputSend__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ClientInputSend__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientInputSend__App__Control();
    private:
        static WriteEnableForThreadsAt_ClientInputSend__Control* _stat_CLASS_ptr_WriteEnable__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnable__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable__Control();
        static WriteEnableForThreadsAt_ClientInputSend__Control* stat_CLASS_get_ptr_WriteEnable__Control();
    };
}
#endif
