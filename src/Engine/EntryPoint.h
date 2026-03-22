#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern StoneEngine::Application* StoneEngine::CreateApplication();

int main(int argc, char** argv) {

	auto app = StoneEngine::CreateApplication();
	app->run();
	delete app;
}

#endif