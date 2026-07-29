#ifndef CLIB_WRITEENABLEFORTHREADSAT_InputPerihperalSamples_WRITEENABLEFORTHREADSAT_InputPerihperalSamples__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_InputPerihperalSamples_WRITEENABLEFORTHREADSAT_InputPerihperalSamples__FRAMEWORK_H
#include "../include/WriteEnableForThreadsAt_InputPerihperalSamples__App.h"
#include "../include/WriteEnableForThreadsAt_InputPerihperalSamples__Global.h"
#include "../include/WriteEnableForThreadsAt_InputPerihperalSamples__Framework.h"
namespace CLIBWriteQueAtInputPerihperalSamples
{
    class WriteEnableForThreadsAt_InputPerihperalSamples__Framework
    {
    public:
        WriteEnableForThreadsAt_InputPerihperalSamples__Framework();
        virtual ~WriteEnableForThreadsAt_InputPerihperalSamples__Framework();
        WriteEnableForThreadsAt_InputPerihperalSamples__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        WriteEnableForThreadsAt_InputPerihperalSamples__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__Framework(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_InputPerihperalSamples__Framework(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__Framework(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_InputPerihperalSamples__Framework(WriteEnableForThreadsAt_InputPerihperalSamples__Framework* obj);
    private:
        static WriteEnableForThreadsAt_InputPerihperalSamples__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App;
        static WriteEnableForThreadsAt_InputPerihperalSamples__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_InputPerihperalSamples__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_InputPerihperalSamples__Global();
        static WriteEnableForThreadsAt_InputPerihperalSamples__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__App();
        static WriteEnableForThreadsAt_InputPerihperalSamples__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_InputPerihperalSamples__Global();
    };
}
#endif