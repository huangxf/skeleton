#include <iostream>
#include "engine.h"
#include "GL/glew.h"
#include "glfw\glfw3.h"


bool Engine::Init()
{
    if (!m_window)
    {
        printf("Error: window instance is null.\n");
        return false;
    }
    m_window->Init();
    return true;
}

bool Engine::Run()
{
    while (!m_window->IsClosed())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        m_window->SwapBuffer();
        m_window->PollEvent();
    }
    return true;
}

bool Engine::Shutdown()
{
    return true;
}




