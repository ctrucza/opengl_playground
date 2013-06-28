#include <GL/glew.h>
#include <GL/freeglut.h>

struct Point
{
    float x;
    float y;
};

Point center;

void init()
{
    center.x = 0.0f;
    center.y = 0.0f;

    GLuint buffer;
    glGenBuffers(1, &buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(Point), &center, GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
}

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glDrawArrays(GL_POINTS, 0, 1);

    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Hello World!");
    glutDisplayFunc(display);

    glewExperimental = GL_TRUE;
    glewInit();

    init();

    glutMainLoop();
}
