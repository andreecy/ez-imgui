#include "Window.h"
#include "ImGuiLayer.h"

namespace App
{
    class Application
    {
    public:
        Application();
        ~Application();
        void Run();

    private:
        Window *m_window = nullptr;
        ImGuiLayer *m_imGuiLayer = nullptr;
    };
}