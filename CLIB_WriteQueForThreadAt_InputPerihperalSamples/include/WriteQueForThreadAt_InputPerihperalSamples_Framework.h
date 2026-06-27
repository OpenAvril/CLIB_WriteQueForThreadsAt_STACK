#ifndef CLIB_WriteQueForThreadAt_InputPerihperalSamples_WriteQueForThreadAt_InputPerihperalSamples_FRAMEWORK_H
#define CLIB_WriteQueForThreadAt_InputPerihperalSamples_WriteQueForThreadAt_InputPerihperalSamples_FRAMEWORK_H
extern "C" {
    namespace CLIBWriteQueAtInputPerihperalSamples
    {
        class WriteQueForThreadAt_InputPerihperalSamples_Framework
        {
        public:

            WriteQueForThreadAt_InputPerihperalSamples_Framework();
            virtual ~WriteQueForThreadAt_InputPerihperalSamples_Framework();
            static void boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples_Framework();
            static void boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples_Framework();
            static void boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples_Framework();
            static void boot0_REG_DECLARE_WriteQueForThreadAt_InputPerihperalSamples_Framework();
            void boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples_Framework(WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples_Framework(WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples_Framework(WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteQueForThreadAt_InputPerihperalSamples_Framework(WriteQueForThreadAt_InputPerihperalSamples_Framework* obj);
            class WriteQueForThreadAt_InputPerihperalSamples* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteQueForThreadAt_InputPerihperalSamples* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteQueForThreadAt_InputPerihperalSamples();
            static void stat_CLASS_boot3_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples();
            static WriteQueForThreadAt_InputPerihperalSamples* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif