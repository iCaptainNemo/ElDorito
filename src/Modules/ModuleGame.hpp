#pragma once

#include "ModuleBase.hpp"

enum DebugLoggingModes
{
	eDebugLoggingModeNetwork = 1,
	eDebugLoggingModeSSL = 2,
	eDebugLoggingModeUI = 4,
	eDebugLoggingModeGame1 = 8,
	eDebugLoggingModeGame2 = 16,
	eDebugLoggingModePackets = 32,
	eDebugLoggingModeMemory = 64
};

namespace Modules
{
	class ModuleGame : public Utils::Singleton<ModuleGame>, public ModuleBase
	{
	public:
		Command* VarLanguageID;
		Command* VarSkipLauncher;
		Command* VarSkipTitleSplash;
		Command* VarLogName;
		Command* VarMenuURL;
		Command* VarRconPort;
		Command* VarMedalPack;

		int DebugFlags;

		std::vector<std::string> CustomMapList;
		std::vector<std::string> MapList;
		std::vector<std::string> FiltersExclude;
		std::vector<std::string> FiltersInclude;

		ModuleGame();
		void UpdateMapList();
		void UpdateCustomMapList();
	};
}