#pragma once
#include "Window.h"
#include "ImGuiLayer.h"
#include "LayerStack.h"

namespace App
{
    class Application
    {
    public:
        static Application &Get() { return *s_Instance; }
        Application();
        ~Application();
        void PushLayer(Layer *layer);
        void PopLayer(Layer *layer);
        void Run();
        Window &GetWindow() { return *m_window; }

    private:
        Window *m_window = nullptr;
        ImGuiLayer *m_imGuiLayer = nullptr;
        bool m_Running = true;
        LayerStack m_layerStack;

    private:
        static Application *s_Instance;
    };

    Application *CreateApplication();
}