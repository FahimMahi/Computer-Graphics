#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
using namespace std;

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (0, 0, 0);

    for(int i=0; i<=400; i+=100){
        glBegin(GL_QUADS);
        glVertex2i(0+i, 0);
        glVertex2i(50+i, 0);
        glVertex2i(50+i, 50);
        glVertex2i(0+i, 50);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2i(50+i, 50);
        glVertex2i(100+i, 50);
        glVertex2i(100+i, 100);
        glVertex2i(50+i, 100);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2i(0+i, 100);
        glVertex2i(50+i, 100);
        glVertex2i(50+i, 150);
        glVertex2i(0+i, 150);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2i(50+i, 150);
        glVertex2i(100+i, 150);
        glVertex2i(100+i, 200);
        glVertex2i(50+i, 200);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2i(0+i, 200);
        glVertex2i(50+i, 200);
        glVertex2i(50+i, 250);
        glVertex2i(0+i, 250);
        glEnd();


        glBegin(GL_QUADS);
        glVertex2i(50+i, 250);
        glVertex2i(100+i, 250);
        glVertex2i(100+i, 300);
        glVertex2i(50+i, 300);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2i(0+i, 300);
        glVertex2i(50+i, 300);
        glVertex2i(50+i, 350);
        glVertex2i(0+i, 350);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2i(50+i, 350);
        glVertex2i(100+i, 350);
        glVertex2i(100+i, 400);
        glVertex2i(50+i, 400);
        glEnd();
    }
    glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (400, 400);
glutInitWindowPosition (250, 250);
glutCreateWindow ("20-42970-1_Chess Board");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
