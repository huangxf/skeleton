#include "glfw_window.h"

bool GLFW_Window::Init()
{
    if (!m_window)
    {
        printf("Error:GLFW window instance is null.\n");
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

void GLFW_Window::SwapBuffer()
{
    glfwSwapBuffers(m_window);
}

void GLFW_Window::PollEvent()
{
    glfwPollEvents();
}
