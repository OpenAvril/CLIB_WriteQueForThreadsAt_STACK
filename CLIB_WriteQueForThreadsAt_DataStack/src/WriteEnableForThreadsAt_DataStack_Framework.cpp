#include "../include/WriteEnableForThreadsAt_DataStack_Framework.h"
#include <iostream>
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_App* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::_stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Framework_App;
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_Global* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::_stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack_Framework_Global;
// public.
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::WriteEnableForThreadsAt_DataStack_Framework(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
	}
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::~WriteEnableForThreadsAt_DataStack_Framework() {
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
		delete _stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Framework_App;
		delete _stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack_Framework_Global;
		std::cout << "thread "  << 0 << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::dyn_CLASS_create_WriteEnableForThreadsAt_DataStack_Architecture(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataStack_Architecture(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Framework(threadId);
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Framework(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataStack_Architecture(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::dyn_CLASS_create_WriteEnableForThreadsAt_DataStack_Global_and_Settings(uint8_t threadId)
	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataStack_Global_and_Settings(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Global(threadId);
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : dyn_CLASS_create_WriteEnableForThreadsAt_DataStack_Global_and_Settings(threadId)." << std::endl;
	}
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_App* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)." << std::endl;
		return stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId);
	}
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_Global* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : dyn_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
		return stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Global(threadId);
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Framework(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_App(threadId);
		stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Global(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Framework(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
		stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_App(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Framework(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
		pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(threadId);
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
	}
// private.
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_App(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Framework_App = nullptr;
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_App(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack_Framework_Global = nullptr;
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_App(uint8_t threadId)	{
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_App(threadId)." << std::endl;
		_stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Framework_App = new class CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_App(threadId);
		while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId) == nullptr) {}
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_App(threadId)." << std::endl;
	}
	void CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
		_stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack_Framework_Global = new class CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_Global(threadId);
		while (stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Global(threadId) == nullptr) {}
		std::cout << "thread " << threadId << " :: entered LIB :: CLIBWriteQueAtDataStack : WriteEnableForThreadsAt_DataStack_Framework : pr_stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
	}
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_App* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_App(threadId)." << std::endl;
		return _stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Framework_App;
	}
	CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework_Global* CLIBWriteQueAtDataStack::WriteEnableForThreadsAt_DataStack_Framework::stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Global(uint8_t threadId) {
		std::cout << "thread " << threadId << " :: <= class : stat_CLASS_get_ptr_WriteEnableForThreadsAt_DataStack_Global(threadId)." << std::endl;
		return _stat_CLASS_ptr_WriteEnableForThreadsAt_DataStack_Framework_Global;
	}