#include <stdio.h>

#include "Application.h"

namespace App
{
    // constructor.
    Application::Application()
    {
        m_window = new Window();
        m_imGuiLayer = new ImGuiLayer(m_window->GetGlfwWindow());
    }

    void Application::Run()
    {
        printf("Application is running... \n");
        // main loop
        while (!m_window->ShouldClose())
        {
            m_imGuiLayer->Update();
            m_window->Update();
        }
    }

    //  destructor
    Application::~Application()
    {
        delete m_imGuiLayer;
        delete m_window;
    }
}