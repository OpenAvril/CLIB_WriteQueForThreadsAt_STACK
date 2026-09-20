#ifndef CLIB_WRITEENABLEFORTHREADSAT_DataCluster_H
#define CLIB_WRITEENABLEFORTHREADSAT_DataCluster_H
#include "../include/WriteEnableForThreadsAt_DataCluster_Framework.h"
extern "C" {
    namespace CLIBWriteQueAtDataCluster {
        class CLIB_WriteEnableForThreadsAt_DataCluster {
        public:
            static void CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_generateAllLibrariesWithin(uint8_t threadId);
            static void* CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_generate_Program(uint8_t threadId, uint8_t dataClusterId);
            static unsigned char* CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId, uint8_t dataClusterId);
            static void CLIB_WriteEnableForThreadsAt_DataCluster_App_FUNCT_terminate_Program(uint8_t threadId, uint8_t dataClusterId);
            static void CLIB_WriteEnableForThreadsAt_App_FUNCT_write_End_DataClusterId_ThreadId(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes);
            static void CLIB_WriteEnableForThreadsAt_App_FUNCT_write_Start_DataClusterId_ThreadId(uint8_t threadId, uint8_t dataClusterId, unsigned char* bytes);
        private:
            static bool CLIB_WriteEnableForThreadsAt_DataCluster_stat_APP_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId, uint8_t dataClusterId);

            static void CLIB_WriteEnableForThreadsAt_DataCluster_stat_REG_boot1_DEFINE_array_of_dataCluster_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_DataCluster_stat_REG_boot2_SUBSTANTIATE_array_of_dataCluster_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_DataCluster_stat_REG_boot2_SUBSTANTIATE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId, uint8_t dataClusterId);
            static void CLIB_WriteEnableForThreadsAt_DataCluster_stat_REG_boot3_INITIALISE_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId, uint8_t dataClusterId);
            static std::array<bool, 5>* CLIB_WriteEnableForThreadsAt_DataCluster_stat_REG_get_array_of_isMemberFunctionINSTANTIATED(uint8_t threadId, uint8_t dataClusterId);
            static void CLIB_WriteEnableForThreadsAt_DataCluster_stat_PGM_boot1_DEFINE_array_of_ptr_DataCluster_Framework(uint8_t threadId);
            static void CLIB_WriteEnableForThreadsAt_DataCluster_stat_PGM_boot3_INITIALISE_array_of_ptr_DataCluster_Framework(uint8_t threadId);
            static std::array<class CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework*, 2>*  CLIB_WriteEnableForThreadsAt_DataCluster_stat_PGM_get_array_of_ptr_DataCluster(uint8_t threadId);
            static class CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework* CLIB_WriteEnableForThreadsAt_DataCluster_stat_PGM_get_ptr_DataCluster(uint8_t threadId, uint8_t dataClusterId);
        };
    }
}
#endif
