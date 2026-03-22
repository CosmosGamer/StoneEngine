#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace StoneEngine {

	class STONE_ENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core logging macros //
#define HZ_CORE_TRACE(...)    ::StoneEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)     ::StoneEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)     ::StoneEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)    ::StoneEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_CRITICAL(...) ::StoneEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client logging macros //
#define HZ_TRACE(...)         ::StoneEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)          ::StoneEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)          ::StoneEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)         ::StoneEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_CRITICAL(...)      ::StoneEngine::Log::GetClientLogger()->critical(__VA_ARGS__)