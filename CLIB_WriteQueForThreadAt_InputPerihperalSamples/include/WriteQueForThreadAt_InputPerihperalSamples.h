#ifndef CLIB_WriteQueForThreadAt_InputPerihperalSamples_WriteQueForThreadAt_InputPerihperalSamples_H
#define CLIB_WriteQueForThreadAt_InputPerihperalSamples_WriteQueForThreadAt_InputPerihperalSamples_H
#include <cstdint>
extern "C"
{
    namespace CLIBWriteQueAtInputPerihperalSamples
    {
        class WriteQueForThreadAt_InputPerihperalSamples
        {
        public:
            WriteQueForThreadAt_InputPerihperalSamples();
            virtual ~WriteQueForThreadAt_InputPerihperalSamples();
            static void boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples();
            static void boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples();
            static void boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples();
            static void boot0_REG_DECLARE_WriteQueForThreadAt_InputPerihperalSamples();
            void boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples(class WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples(class WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples(class WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteQueForThreadAt_InputPerihperalSamples(class WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void dyn_app_FUNCT_write_End(WriteQueForThreadAt_InputPerihperalSamples_Framework* obj, uint8_t coreId);
            void dyn_app_FUNCT_write_Start(WriteQueForThreadAt_InputPerihperalSamples_Framework* obj, uint8_t coreId);
            class WriteQueForThreadAt_InputPerihperalSamples_Global* dyn_CLASS_get_ptr_Global();
            class WriteQueForThreadAt_InputPerihperalSamples_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        private:
            static class WriteQueForThreadAt_InputPerihperalSamples_Global* _stat_CLASS_ptr_Global;
            static class WriteQueForThreadAt_InputPerihperalSamples_Control* _stat_CLASS_ptr_WriteEnable_Control;
            static void stat_CLASS_boot1_DEFINE_Global();
            static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
            static void stat_CLASS_boot3_INITIALISE_Global();
            static void stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
            static WriteQueForThreadAt_InputPerihperalSamples_Global* stat_CLASS_get_ptr_Global();
            static WriteQueForThreadAt_InputPerihperalSamples_Control* stat_CLASS_get_ptr_WriteEnable_Control();
        };
    }
}
#endif
