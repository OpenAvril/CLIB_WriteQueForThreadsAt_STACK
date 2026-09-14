#ifndef CLIB_WriteEnableForThreadsAt_DataStack__App_WriteEnableForThreadsAt_DataStack__App__APP_H
#define CLIB_WriteEnableForThreadsAt_DataStack__App_WriteEnableForThreadsAt_DataStack__App__APP_H
#include "../include/WriteEnableForThreadsAt_DataStack__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtDataStack
{
    class WriteEnableForThreadsAt_DataStack__App
    {
    public:
        WriteEnableForThreadsAt_DataStack__App();
        virtual ~WriteEnableForThreadsAt_DataStack__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_DataStack__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_DataStack__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_DataStack__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__App(WriteEnableForThreadsAt_DataStack__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_DataStack__App(WriteEnableForThreadsAt_DataStack__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__App(WriteEnableForThreadsAt_DataStack__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_DataStack__App(WriteEnableForThreadsAt_DataStack__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_DataStack__App();
    private:
        static WriteEnableForThreadsAt_DataStack__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack__App__Control();
        static WriteEnableForThreadsAt_DataStack__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack__App__Control();
    };
}
#endif
