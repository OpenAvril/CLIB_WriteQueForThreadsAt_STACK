#ifndef CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_WriteEnableForThreadsAt_OutputGameInstanaceData__App__APP_H
#define CLIB_WriteEnableForThreadsAt_OutputGameInstanaceData__App_WriteEnableForThreadsAt_OutputGameInstanaceData__App__APP_H
#include "../include/WriteEnableForThreadsAt_OutputGameInstanaceData__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtOutputGameInstanaceData
{
    class WriteEnableForThreadsAt_OutputGameInstanaceData__App
    {
    public:
        WriteEnableForThreadsAt_OutputGameInstanaceData__App();
        virtual ~WriteEnableForThreadsAt_OutputGameInstanaceData__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_OutputGameInstanaceData__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__App(WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_OutputGameInstanaceData__App(WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_OutputGameInstanaceData__App(WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_OutputGameInstanaceData__App(WriteEnableForThreadsAt_OutputGameInstanaceData__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_OutputGameInstanaceData__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OutputGameInstanaceData__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_OutputGameInstanaceData__App();
    private:
        static WriteEnableForThreadsAt_OutputGameInstanaceData__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_OutputGameInstanaceData__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_OutputGameInstanaceData__App__Control();
        static WriteEnableForThreadsAt_OutputGameInstanaceData__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_OutputGameInstanaceData__App__Control();
    };
}
#endif
