#include "engine.h"
#include "glfw_window.h"

int main()
{
	WindowPara para = { "Test", 1024,768 };
	Window* window = static_cast<Window *>(new GLFW_Window(para));
	Engine engine(window);
	if(!engine.Init()) return 0;
	engine.Run();
	engine.Shutdown();
	if (window) delete window;
	return 0;
}