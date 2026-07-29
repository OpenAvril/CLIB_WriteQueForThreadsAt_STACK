#ifndef CLIB_WriteEnableForThreadsAt_InputPerihperalSamples__App_WriteEnableForThreadsAt_InputPerihperalSamples__App__APP_H
#define CLIB_WriteEnableForThreadsAt_InputPerihperalSamples__App_WriteEnableForThreadsAt_InputPerihperalSamples__App__APP_H
#include "../include/WriteEnableForThreadsAt_InputPerihperalSamples__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtInputPerihperalSamples
{
    class WriteEnableForThreadsAt_InputPerihperalSamples__App
    {
    public:
        WriteEnableForThreadsAt_InputPerihperalSamples__App();
        virtual ~WriteEnableForThreadsAt_InputPerihperalSamples__App();
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_InputPerihperalSamples__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App__Control();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__App(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_InputPerihperalSamples__App(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__App(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_InputPerihperalSamples__App(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_InputPerihperalSamples__App();
    private:
        static WriteEnableForThreadsAt_InputPerihperalSamples__Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__App__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__App__Control();
        static WriteEnableForThreadsAt_InputPerihperalSamples__Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App__Control();
    };
}
#endif
