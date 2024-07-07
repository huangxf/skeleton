#include "engine.h"
#include "glfw_window.h"
#include "MACRO.h"

int main()
{
	WindowPara para = { "Test", 1024,768 };
	Window* window = static_cast<Window *>(new GLFW_Window(para));
	Engine* engine =new Engine(window);
	if(!engine->Init()) return 0;
	engine->Run();
	engine->Shutdown();
	DESTROY(engine);
	DESTROY(window);
	return 0;
}