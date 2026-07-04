#ifndef CLIB_WRITEQUEFORTHREADAT_OUTPUTGAMEINSTANACEDATA_WRITEQUEFORTHREADAT_OUTPUTGAMEINSTANACEDATA_FRAMEWORK_H
#define CLIB_WRITEQUEFORTHREADAT_OUTPUTGAMEINSTANACEDATA_WRITEQUEFORTHREADAT_OUTPUTGAMEINSTANACEDATA_FRAMEWORK_h
extern "C" {
    namespace CLIBWriteQueAtOutputGameInstanaceData
    {
        class WriteQueForThreadAt_OutputGameInstanaceData_Framework
        {
        public:

            WriteQueForThreadAt_OutputGameInstanaceData_Framework();
            virtual ~WriteQueForThreadAt_OutputGameInstanaceData_Framework();
            static void boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
            static void boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
            static void boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
            static void boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData_Framework();
            void boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteQueForThreadAt_OutputGameInstanaceData_Framework(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            class WriteQueForThreadAt_OutputGameInstanaceData* dyn_CLASS_get_ptr_WriteEnable();
        private:
            static WriteQueForThreadAt_OutputGameInstanaceData* _stat_CLASS_get_ptr_WriteEnable;
            static void stat_CLASS_boot1_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData();
            static void stat_CLASS_boot3_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData();
            static WriteQueForThreadAt_OutputGameInstanaceData* stat_CLASS_get_ptr_WriteEnable();
        };
    }
}
#endif