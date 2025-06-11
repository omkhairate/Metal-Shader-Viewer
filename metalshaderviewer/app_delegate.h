//
//  app_delegate.h
//  metalshaderviewer
//
//  Created by Om Khairate on 11.06.25.
//

#pragma once
#include "config.h"
#include "view_delegate.h"

class AppDelegate : public NS::ApplicationDelegate
{
public:
    ~AppDelegate();
    
    virtual void applicationWillFinishLaunching(NS::Notification* notification) override;
    virtual void applicationDidFinishLaunching(NS::Notification* notification) override;
    virtual void applicationShouldTerminateAfterLastWindowClosed(NS::Application* sender) override;
    
private:
    NS::Window* window;
    MTK::View* mtkView;
    MTL::Device* device;
    ViewDelegate* viewdelegate = nullptr;
}
