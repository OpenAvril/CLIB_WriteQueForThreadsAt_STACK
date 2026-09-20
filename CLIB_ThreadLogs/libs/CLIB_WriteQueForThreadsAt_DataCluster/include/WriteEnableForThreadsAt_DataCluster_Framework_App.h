#ifndef CLIB_WRITEENABLEFORTHREADSAT_DataCluster_FRAMEWORK_APP_H
#define CLIB_WRITEENABLEFORTHREADSAT_DataCluster_FRAMEWORK_APP_H
#include "../include/WriteEnableForThreadsAt_DataCluster_Framework_App_Control.h"
#include <cstdint>
namespace CLIBWriteQueAtDataCluster {
    class WriteEnableForThreadsAt_DataCluster_Framework_App {
    public:
        WriteEnableForThreadsAt_DataCluster_Framework_App(uint8_t threadId);
        virtual ~WriteEnableForThreadsAt_DataCluster_Framework_App();
        void dyn_APP_FUNCT_write_End(uint8_t threadId, WriteEnableForThreadsAt_DataCluster_Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(uint8_t threadId, WriteEnableForThreadsAt_DataCluster_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_DataCluster_Framework_App_Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App_Control(uint8_t threadId);
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId, WriteEnableForThreadsAt_DataCluster_Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId, WriteEnableForThreadsAt_DataCluster_Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId, WriteEnableForThreadsAt_DataCluster_Framework* obj);
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId);
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId);
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId);
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId);
    private:
        static class WriteEnableForThreadsAt_DataCluster_Framework_App_Control* _stat_CLASS_ptr_WriteEnableForThreadsAt_DataCluster_App_Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App_Control(uint8_t threadId);
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App_Control(uint8_t threadId);
        static class WriteEnableForThreadsAt_DataCluster_Framework_App_Control* stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App_Control(uint8_t threadId);
    };
}
#endif
