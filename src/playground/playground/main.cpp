#include <GL/freeglut.h>

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glFlush();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Hello World!");
    glutDisplayFunc(display);
    glutMainLoop();
}
