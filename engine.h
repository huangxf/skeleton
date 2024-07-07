#ifndef _ENGINE_
#define _ENGINE_

#include "window.h"
#include "log.hpp"

class Engine
{
public:
    //default constructor
    Engine() :m_window(nullptr)
    {}

    Engine(Window* window) :m_window(window)
    {}

    //deconstructor
    ~Engine()
    {
        if(!m_window) delete m_window;
    }
     
    Window * GetWindow() {return m_window;}
    
    bool SetWindow(Window* window) { this->m_window = window; };
    bool Init();
    bool Run();
    bool Shutdown();

private:
    Window *m_window; //device
};

#endif