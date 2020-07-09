#include <iostream>
#include <GLFW/glfw3.h>
#include "../src/core/window.h"

using namespace std;

int main(void)
{
    Window window(640, 480, "Hello World");

    if(!window.init()) return -1;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window.getWindowHandler()))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window.getWindowHandler());

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
