#include <GLFW/glfw3.h>

class Window
{
public:
    Window(int _height, int _width, char* _title);
    ~Window();

    GLFWwindow* getWindowHandler() const;

    bool init();
private:
    int height;
    int width;
    char* title;

    GLFWwindow* window;
};
