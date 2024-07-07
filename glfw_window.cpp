#include "glfw_window.h"

//Window context and OpenGL are linked here.
//Cursor status and mouse_input callback function are configured here
bool GLFW_Window::Init()
{
    if (!m_window)
    {
        LOG("Error:GLFW window instance is null.\n");
        return false;
    }
    glfwMakeContextCurrent(m_window);
    glfwSetCursorPosCallback(m_window, NULL);
    glfwSetInputMode(m_window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    return true;
}

void GLFW_Window::Destroy()
{
    glfwDestroyWindow(m_window);
    m_window = nullptr;
    glfwTerminate();
}

void GLFW_Window::Close()
{
    glfwSetWindowShouldClose(m_window, true);
}

bool GLFW_Window::IsClosed()
{
    return glfwWindowShouldClose(m_window);
}

void GLFW_Window::BeforeRender()
{
    KeyboardInput();
}

void GLFW_Window::Render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glfwSwapBuffers(m_window);
}

void GLFW_Window::AfterRender()
{
    glfwPollEvents();
}

void GLFW_Window::KeyboardInput()
{
    if (glfwGetKey(m_window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(m_window, true);
}

void GLFW_Window::Mouse_callback()
{

}


