#include "imgui.h"
#include <GLFW/glfw3.h>

namespace App
{
    class ImGuiLayer
    {
    public:
        ImGuiLayer(GLFWwindow *glfwWindow);
        ~ImGuiLayer();
        void Init(GLFWwindow *glfwWindow);
        void Update();

    private:
        GLFWwindow *m_glfwWindow = nullptr;
    };
}