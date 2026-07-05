#ifndef CLIB_WRITEENABLEFORTHREADSAT_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive__APP_H
#define CLIB_WRITEENABLEFORTHREADSAT_ClientOutputReceive_WRITEENABLEFORTHREADSAT_ClientOutputReceive__APP_H
#include "WriteEnableForThreadsAt_ClientOutputReceive__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtClientOutputReceive
{
    class WriteEnableForThreadsAt_ClientOutputReceive__App
    {
    public:
        WriteEnableForThreadsAt_ClientOutputReceive__App();
        virtual ~WriteEnableForThreadsAt_ClientOutputReceive__App();
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientOutputReceive();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientOutputReceive(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientOutputReceive(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientOutputReceive(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientOutputReceive(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj);
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientOutputReceive__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ClientOutputReceive__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientOutputReceive__App__Control();
    private:
        static WriteEnableForThreadsAt_ClientOutputReceive__Control* _stat_CLASS_ptr_WriteEnable__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnable__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable__Control();
        static WriteEnableForThreadsAt_ClientOutputReceive__Control* stat_CLASS_get_ptr_WriteEnable__Control();
    };
}
#endif
