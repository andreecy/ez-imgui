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
