namespace App
{
    class Application
    {
    public:
        Application();
        ~Application();
        void onStart();
        void render();

    private:
        GLFWwindow *m_glfwWindow = nullptr;
    };
}