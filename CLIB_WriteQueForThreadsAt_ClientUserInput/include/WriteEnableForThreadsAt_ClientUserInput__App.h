#ifndef CLIB_WriteEnableForThreadsAt_ClientUserInput__App_WriteEnableForThreadsAt_ClientUserInput__App__APP_H
#define CLIB_WriteEnableForThreadsAt_ClientUserInput__App_WriteEnableForThreadsAt_ClientUserInput__App__APP_H
#include "../include/WriteEnableForThreadsAt_ClientUserInput__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtClientUserInput
{
    class WriteEnableForThreadsAt_ClientUserInput__App
    {
    public:
        WriteEnableForThreadsAt_ClientUserInput__App();
        virtual ~WriteEnableForThreadsAt_ClientUserInput__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_ClientUserInput__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_ClientUserInput__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_ClientUserInput__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__App(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ClientUserInput__App(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__App(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_ClientUserInput__App(WriteEnableForThreadsAt_ClientUserInput__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserInput__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_ClientUserInput__App();
    private:
        static WriteEnableForThreadsAt_ClientUserInput__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_ClientUserInput__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ClientUserInput__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ClientUserInput__App__Control();
        static WriteEnableForThreadsAt_ClientUserInput__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_ClientUserInput__App__Control();
    };
}
#endif
