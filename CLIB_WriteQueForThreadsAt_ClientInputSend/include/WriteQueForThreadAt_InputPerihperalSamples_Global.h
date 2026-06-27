#ifndef CLIB_WriteQueForThreadAt_InputPerihperalSamples_WriteQueForThreadAt_InputPerihperalSamples_Global_H
#define CLIB_WriteQueForThreadAt_InputPerihperalSamples_WriteQueForThreadAt_InputPerihperalSamples_Global_H
#include <array>
#include <cstdint>
extern "C" {
    namespace CLIBWriteQueAtClientInputSend
    {
        class WriteQueForThreadAt_InputPerihperalSamples_Global
        {
        public:
            WriteQueForThreadAt_InputPerihperalSamples_Global();
            ~WriteQueForThreadAt_InputPerihperalSamples_Global();
            void boot1_REG_DEFINE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            void boot2_REG_SUBSTANTIATE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            void boot3_REG_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            void boot4_PGM_INSTANTIATION_WriteQueForThreadAt_InputPerihperalSamples_Global();
            std::array<bool,2> dyn_REG_get_ptr_CONST_2bitFLAG_IDLE();
            std::array<bool,2> dyn_REG_get_ptr_CONST_2bitFLAG_WAIT();
            std::array<bool,2> dyn_REG_get_ptr_CONST_2bitFLAG_WRITE();
            uint8_t dyn_REG_get_number_Of_Implemented_Threads();
            static void boot0_CLASS_DECLARE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            static void boot1_CLASS_DEFINE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            static void boot3_CLASS_INITIALISE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            static void boot0_REG_DECLARE_WriteQueForThreadAt_InputPerihperalSamples_Global();
            static unsigned char* stat_CONVERT_bool_to_ByteArray(bool bool_Value);
            static unsigned char* stat_CONVERT_uint8_t_To_ByteArray(uint8_t uint8_t_Value);
            static bool stat_CONVERT_ByteArray_To_bool(unsigned char* bytes);
            static uint8_t stat_CONVERT_ByteArray_To_uint8_t(unsigned char* bytes);
        private:
            static std::array<bool,2>* _stat_REG_CONST_2bitFLAG_IDLE;
            static std::array<bool,2>* _stat_REG_CONST_2bitFLAG_WAIT;
            static std::array<bool,2>* _stat_REG_CONST_2bitFLAG_WRITE;
            static uint8_t* _stat_REG_ptr_number_Of_Implemented_Threads;
            static void stat_REG_boot1_DEFINE_CONST_2bitFLAG_IDLE();
            static void stat_REG_boot1_DEFINE_CONST_2bitFLAG_WAIT();
            static void stat_REG_boot1_DEFINE_CONST_2bitFLAG_WRITE();
            static void stat_REG_boot1_DEFINE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_IDLE();
            static void stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WAIT();
            static void stat_REG_boot2_SUBSTANTIATE_CONST_2bitFLAG_WRITE();
            static void stat_REG_boot2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot3_INITIALISE_ptr_number_Of_Implemented_Threads();
            static void stat_REG_boot3_INITIALISE_CONST_2bitFLAG_IDLE();
            static void stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WAIT();
            static void stat_REG_boot3_INITIALISE_CONST_2bitFLAG_WRITE();
            static std::array<bool,2>* stat_REG_get_ptr_CONST_2bitFLAG_IDLE();
            static std::array<bool,2>* stat_REG_get_ptr_CONST_2bitFLAG_WAIT();
            static std::array<bool,2>* stat_REG_get_ptr_CONST_2bitFLAG_WRITE();
            static uint8_t* stat_REG_get_ptr_number_Of_Implemented_Threads();
        };
    }
}
#endif