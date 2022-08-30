# Ez ImGui
C++ ImGui GLFW template project 

Create C++ GUI App with ease.


### Getting Started
We already made an app with imgui demo window implementation. 
Just build project and run the `main` executable. 

### Entry Point
Here are our entry point

```cpp
// src/main.cpp
#include "App.h"
#include "DemoLayer.h"

int main(int, char **)
{
    // create application
    App::Application app;

    // add demo layer to app stack
    app.PushLayer(new DemoLayer());

    // run app
    app.Run();

    return 0;
}

```

```cpp
// src/DemoLayer.h
#include "App.h"

// a layer class implementing App::Layer
class DemoLayer : public App::Layer
{
public:
    void ImGuiRender() override;
};
```

```cpp
// src/DemoLayer.cpp
#include "DemoLayer.h"

// layer main loop called inside application layer stacks
void DemoLayer::ImGuiRender()
{
    // code imgui render stuff here
    ImGui::ShowDemoWindow();
}
```