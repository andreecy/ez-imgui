#include <stdio.h>

#include "Application.h"

namespace App
{
    Application *Application::s_Instance = nullptr;

    // constructor.
    Application::Application()
    {
        assert(!s_Instance);
        s_Instance = this;

        m_window = new Window();
        m_imGuiLayer = new ImGuiLayer();
    }

    void Application::PushLayer(Layer *layer)
    {
        m_layerStack.PushLayer(layer);
        layer->OnAttach();
    }
    void Application::PopLayer(Layer *layer)
    {
    }

    void Application::Run()
    {
        printf("Application is running... \n");
        // main loop
        while (!m_window->ShouldClose())
        {
            m_window->GetFrameBufferSize();
            m_window->SetViewport();
            m_window->SetClearColor();
            m_window->Clear();

            {
                for (Layer *layer : m_layerStack)
                    layer->Update();
            }

            m_imGuiLayer->Begin();
            {
                for (Layer *layer : m_layerStack)
                    layer->ImGuiRender();
            }
            m_imGuiLayer->End();

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