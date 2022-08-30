#pragma once

#include "imgui.h"
#include <GLFW/glfw3.h>

namespace App
{
    class ImGuiLayer
    {
    public:
        ImGuiLayer();
        ~ImGuiLayer();
        void Init();
        void Begin();
        void Update();
        void End();

    private:
        GLFWwindow *m_glfwWindow = nullptr;
    };
}