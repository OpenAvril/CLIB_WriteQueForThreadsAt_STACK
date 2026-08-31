#ifndef CLIB_WriteEnableForThreadsAt_Server_IO__App_WriteEnableForThreadsAt_Server_IO__App__APP_H
#define CLIB_WriteEnableForThreadsAt_Server_IO__App_WriteEnableForThreadsAt_Server_IO__App__APP_H
#include "../include/WriteEnableForThreadsAt_Server_IO__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtServer_IO
{
    class WriteEnableForThreadsAt_Server_IO__App
    {
    public:
        WriteEnableForThreadsAt_Server_IO__App();
        virtual ~WriteEnableForThreadsAt_Server_IO__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_Server_IO__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_Server_IO__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_Server_IO__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_Server_IO__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_Server_IO__App(WriteEnableForThreadsAt_Server_IO__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_Server_IO__App(WriteEnableForThreadsAt_Server_IO__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_Server_IO__App(WriteEnableForThreadsAt_Server_IO__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_Server_IO__App(WriteEnableForThreadsAt_Server_IO__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_Server_IO__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_IO__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_IO__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_Server_IO__App();
    private:
        static WriteEnableForThreadsAt_Server_IO__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_Server_IO__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_Server_IO__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_Server_IO__App__Control();
        static WriteEnableForThreadsAt_Server_IO__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_Server_IO__App__Control();
    };
}
#endif
