#ifndef CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_WriteEnableForThreadsAt_ClientUserOutput__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ClientUserOutput__App_WriteEnableForThreadsAt_ClientUserOutput__App__APP_H
#include "../include/WriteEnableForThreadsAt_ClientUserOutput__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtClientUserOutput
{
    class WriteEnableForThreadsAt_ClientUserOutput__App
    {
    public:
        WriteEnableForThreadsAt_ClientUserOutput__App();
        virtual ~WriteEnableForThreadsAt_ClientUserOutput__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ClientUserOutput__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientUserOutput__App(WriteEnableForThreadsAt_ClientUserOutput__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserOutput__App();
    private:
        static WriteEnableForThreadsAt_ClientUserOutput__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
        static WriteEnableForThreadsAt_ClientUserOutput__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserOutput__App__Control();
    };
}
#endif
