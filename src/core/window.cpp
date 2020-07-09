#include "window.h"

Window::Window(int _height, int _width, char* _title)
{
    height = _height;
    width = _width;
    title = _title;
}

Window::~Window()
{}

bool Window::init()
{

    /* Initialize the library */
    if (!glfwInit())
        return false;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(height, width, title, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return false;
    }

    return true;
}

GLFWwindow* Window::getWindowHandler() const
{
    return window;
}
