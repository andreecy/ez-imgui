#include <stdio.h>

#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>

#include "Window.h"

static void glfw_error_callback(int error, const char *description)
{
    fprintf(stderr, "Glfw Error %d: %s\n", error, description);
}

namespace App
{
    Window::Window()
    {
        // Setup window
        glfwSetErrorCallback(glfw_error_callback);
        if (!glfwInit())
            return;

        // Create window with graphics context
        m_glfwWindow = glfwCreateWindow(1280, 720, "Window", NULL, NULL);
        if (m_glfwWindow == NULL)
            return;
        glfwMakeContextCurrent(m_glfwWindow);
        glfwSwapInterval(1); // Enable vsync

        // printf("glfw init\n");
    }

    Window::~Window()
    {
        glfwDestroyWindow(m_glfwWindow);
        glfwTerminate();
    }

    void Window::Init()
    {
    }

    int Window::ShouldClose()
    {
        return glfwWindowShouldClose(m_glfwWindow);
    }

    void Window::GetFrameBufferSize()
    {
        glfwGetFramebufferSize(m_glfwWindow, &m_width, &m_height);
    }

    void Window::SetViewport()
    {
        glViewport(0, 0, m_width, m_height);
    }

    void Window::SetClearColor()
    {
        glClearColor(m_clearColor.x * m_clearColor.w, m_clearColor.y * m_clearColor.w, m_clearColor.z * m_clearColor.w, m_clearColor.w);
    }

    void Window::Clear()
    {
        glClear(GL_COLOR_BUFFER_BIT);
    }

    void Window::Update()
    {
        glfwSwapBuffers(m_glfwWindow);
        glfwPollEvents();
    }
}