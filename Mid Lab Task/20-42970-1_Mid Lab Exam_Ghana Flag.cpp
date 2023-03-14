#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(500, 0);
    glVertex2i(500, 125);
    glVertex2i(0, 125);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(0, 125);
    glVertex2i(500, 125);
    glVertex2i(500, 250);
    glVertex2i(0, 250);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(0, 250);
    glVertex2i(500, 250);
    glVertex2i(500, 375);
    glVertex2i(0, 375);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(250, 250);
    glVertex2i(200, 125);
    glVertex2i(250, 160);
    glVertex2i(300, 125);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(250, 160);
    glVertex2i(320, 210);
    glVertex2i(180, 210);
    glEnd();
    glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 500.0, 0.0, 375.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 375);
glutInitWindowPosition (100, 150);
glutCreateWindow ("20-42970-1_Ghana Flag");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
