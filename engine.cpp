#include <iostream>
#include "engine.h"
#include "GL/glew.h"
#include "glfw\glfw3.h"


bool Engine::Init()
{
    if (!m_window)
    {
        LOG("Error: window instance is null.\n");
        return false;
    }
    m_window->Init();
    return true;
}

bool Engine::Run()
{
    while (!m_window->IsClosed())
    {
        m_window->BeforeRender();
        m_window->Render();
        m_window->AfterRender();
    }
    return true;
}

bool Engine::Shutdown()
{
    m_window->Destroy();
    return true;
}




