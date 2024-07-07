#include "window.h"
#include "iostream"
#include "GL/glew.h"
#include "glfw\glfw3.h"
#include "log.hpp"

class GLFW_Window: public Window
{
public:
    void* GetWndHandler() override { return m_window; }
    bool Init() override;
    void Destroy() override;
    void Close() override;
    bool IsClosed() override;
    void BeforeRender() override;
    void Render() override;
    void AfterRender() override;

    GLFW_Window(WindowPara& windowPara) :winPara(windowPara),m_window(nullptr)
    {
        if (!glfwInit())
        {
            printf("Fail to initialize glfw.\n");
            return;
        }           

        m_window = glfwCreateWindow(windowPara.width, windowPara.height, windowPara.title, NULL, NULL);
        GLenum error = glGetError();

        if (m_window == nullptr)
        {
            printf("Fail to create glfw window.\n");
            glfwTerminate();
            return;
        }
    }

    GLFW_Window():winPara({"Noname",0,0}), m_window(nullptr) {}

private:
    void KeyboardInput();
    void Mouse_callback();

    WindowPara winPara;
    GLFWwindow * m_window;
};