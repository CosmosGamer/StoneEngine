#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern StoneEngine::Application* StoneEngine::CreateApplication();

int main(int argc, char** argv) 
{

	StoneEngine::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	auto app = StoneEngine::CreateApplication();
	app->run();
	delete app;
}

#endif