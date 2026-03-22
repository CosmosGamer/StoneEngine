#include <StoneEngine.h>

class Sandbox : public StoneEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

StoneEngine::Application* StoneEngine::CreateApplication()
{
	return new Sandbox();
}