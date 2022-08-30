#pragma once

#include <iostream>
#include "imgui.h"
#include <GLFW/glfw3.h>

namespace App
{
    class Window
    {
    public:
        Window();
        ~Window();
        void Init();
        void Update();
        int ShouldClose();
        GLFWwindow *GetGlfwWindow() const
        {
            return m_glfwWindow;
        }

    private:
        int m_width, m_height;
        GLFWwindow *m_glfwWindow = nullptr;
        ImVec4 m_clearColor = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    };
}