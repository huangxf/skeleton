#ifndef _WINDOW_
#define _WINDOW_

#include "WindowPara.h"

class Window {
public:
    //GetWndHandler returns a void* pointer to a window instance you created.
    virtual void * GetWndHandler() = 0;
    
    //Put contex init, input device init and resource loading code in Init
    virtual bool Init() = 0;

    //Close
    virtual void Close() = 0;
    virtual bool IsClosed() = 0;

    //Destroy all necessary resources here before exit
    virtual void Destroy() = 0;

    //Update window and graphics data in BeforeRender
    virtual void BeforeRender() = 0;

    //Render code is here
    virtual void Render() = 0;

    //Event process and so on
    virtual void AfterRender() = 0;

    virtual ~Window() {}
};

#endif