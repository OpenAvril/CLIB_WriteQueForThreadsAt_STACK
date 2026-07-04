#ifndef CLIB_WRITEQUEFORTHREADAT_OUTPUTGAMEINSTANACEDATA_WRITEENABLEFORTHREADSAT_CLIENTINPUTSEND_H
#define CLIB_WRITEQUEFORTHREADAT_OUTPUTGAMEINSTANACEDATA_WRITEENABLEFORTHREADSAT_CLIENTINPUTSEND_H
#include <cstdint>
extern "C"
{
    namespace CLIBWriteQueAtOutputGameInstanaceData
    {
        class WriteQueForThreadAt_OutputGameInstanaceData
        {
        public:
            WriteQueForThreadAt_OutputGameInstanaceData();
            virtual ~WriteQueForThreadAt_OutputGameInstanaceData();
            static void boot0_CLASS_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData();
            static void boot1_CLASS_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData();
            static void boot3_CLASS_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData();
            static void boot0_REG_DECLARE_WriteQueForThreadAt_OutputGameInstanaceData();
            void boot1_REG_DEFINE_WriteQueForThreadAt_OutputGameInstanaceData(class WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_OutputGameInstanaceData(class WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void boot3_REG_INITIALISE_WriteQueForThreadAt_OutputGameInstanaceData(class WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void boot4_PGM_INSTANTIATION_WriteQueForThreadAt_OutputGameInstanaceData(class WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj);
            void dyn_app_FUNCT_write_End(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj, uint8_t coreId);
            void dyn_app_FUNCT_write_Start(WriteQueForThreadAt_OutputGameInstanaceData_Framework* obj, uint8_t coreId);
            class WriteQueForThreadAt_OutputGameInstanaceData_Global* dyn_CLASS_get_ptr_Global();
            class WriteQueForThreadAt_OutputGameInstanaceData_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        private:
            static class WriteQueForThreadAt_OutputGameInstanaceData_Global* _stat_CLASS_ptr_Global;
            static class WriteQueForThreadAt_OutputGameInstanaceData_Control* _stat_CLASS_ptr_WriteEnable_Control;
            static void stat_CLASS_boot1_DEFINE_Global();
            static void stat_CLASS_boot1_DEFINE_WriteEnable_Control();
            static void stat_CLASS_boot3_INITIALISE_Global();
            static void stat_CLASS_boot3_INITIALISE_WriteEnable_Control();
            static WriteQueForThreadAt_OutputGameInstanaceData_Global* stat_CLASS_get_ptr_Global();
            static WriteQueForThreadAt_OutputGameInstanaceData_Control* stat_CLASS_get_ptr_WriteEnable_Control();
        };
    }
}
#endif
