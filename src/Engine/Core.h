#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define STONE_ENGINE_API __declspec(dllexport)
	#else
		#define STONE_ENGINE_API __declspec(dllimport)
	#endif
#else
	#error This engine only supports Windows!
#endif