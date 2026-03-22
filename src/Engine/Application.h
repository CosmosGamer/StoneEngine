#pragma once

#include "Core.h"

namespace StoneEngine {

	class STONE_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* CreateApplication();

}