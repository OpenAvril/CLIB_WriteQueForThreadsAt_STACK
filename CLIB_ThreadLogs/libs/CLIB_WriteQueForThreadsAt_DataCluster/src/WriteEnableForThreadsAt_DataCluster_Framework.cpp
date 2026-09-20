#include "../include/WriteEnableForThreadsAt_DataCluster_Framework.h"
#include <iostream>
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_App* CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::_stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Framework_App;
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_Global* CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::_stat_CLASS_ptr_WriteEnableForThreadsAt_DataCluster_Framework_Global;
// public.
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::WriteEnableForThreadsAt_DataCluster_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
	}
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::~WriteEnableForThreadsAt_DataCluster_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Framework_App;
		delete _stat_CLASS_ptr_WriteEnableForThreadsAt_DataCluster_Framework_Global;
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::dyn_CLASS_create_WriteEnableForThreadsAt_DataCluster_Architecture(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataCluster_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Framework(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataCluster_Architecture(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::dyn_CLASS_create_WriteEnableForThreadsAt_DataCluster_Global_and_Settings(uint8_t threadId)
	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataCluster_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Global(threadId);
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataCluster_Global_and_Settings(threadId)." << std::endl;
	}
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_App* CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App(threadId);
	}
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_Global* CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Global(threadId);
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App(threadId);
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Framework(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(threadId);
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
	}
// private.
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Framework_App = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_App(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_WriteEnableForThreadsAt_DataCluster_Framework_Global = nullptr;
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId)	{
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Framework_App = new class CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_App(threadId);
		while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_App(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_WriteEnableForThreadsAt_DataCluster_Framework_Global = new class CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Global(threadId) == nullptr) {}
		std::cout << "thread " << std::to_string(threadId) << " :: entered LIB :: CLIBWriteQueAtDataCluster : WriteEnableForThreadsAt_DataCluster_Framework : pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
	}
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_App* CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Framework_App;
	}
	CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework_Global* CLIBWriteQueAtDataCluster::WriteEnableForThreadsAt_DataCluster_Framework::stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Global(uint8_t threadId) {
		std::cout << "thread " << std::to_string(threadId) << " :: <= class : stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataCluster_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_WriteEnableForThreadsAt_DataCluster_Framework_Global;
	}