#ifndef _WINDOW_
#define _WINDOW_

#include "WindowPara.h"

class Window {
public:
    virtual void * GetWndHandler() = 0;
    virtual bool Init() = 0;
    virtual void Close() = 0;
    virtual bool IsClosed() = 0;
    virtual void Destroy() = 0;
    virtual void SwapBuffer() = 0;
    virtual void PollEvent() = 0;
    virtual ~Window() {}
};

#endif