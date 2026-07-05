#ifndef CLIB_WRITEENABLEFORTHREADSAT_InputPerihperalSamples_WRITEENABLEFORTHREADSAT_InputPerihperalSamples__APP_H
#define CLIB_WRITEENABLEFORTHREADSAT_InputPerihperalSamples_WRITEENABLEFORTHREADSAT_InputPerihperalSamples__APP_H
#include "WriteEnableForThreadsAt_InputPerihperalSamples__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtInputPerihperalSamples
{
    class WriteEnableForThreadsAt_InputPerihperalSamples__App
    {
    public:
        WriteEnableForThreadsAt_InputPerihperalSamples__App();
        virtual ~WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_InputPerihperalSamples();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_InputPerihperalSamples();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_InputPerihperalSamples(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_InputPerihperalSamples(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_InputPerihperalSamples__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App__Control();
    private:
        static WriteEnableForThreadsAt_InputPerihperalSamples__Control* _stat_CLASS_ptr_WriteEnable__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnable__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable__Control();
        static WriteEnableForThreadsAt_InputPerihperalSamples__Control* stat_CLASS_get_ptr_WriteEnable__Control();
    };
}
#endif
