#include<windows.h>
#include<stdlib.h>
#include<cstdio>
#include<GL/gl.h>
#include<GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

int xa,xb,ya,yb;

void display (void)
{

    int dx=xb-xa;
    int dy=yb-ya;
    int m0 = dy/dx;
    float x=xa,y=ya;
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    int m =m0;
    int k;
    for(k=0;k<dx;k++)
    {
        if(m<1)
        {
            x = x+1;
            y=y+m;
            glVertex2i(x,y);
        }

        else if(m>1)
        {
            x = x+(1/m);
            y = y+1;
            glVertex2i(x,y);

        }

        else if(m=1)
        {
            x=x+1;
            y=y+1;
            glVertex2i(x,y);
        }

    }

    glEnd();
    glFlush();

}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    cout<<"For Line:"<<endl;
    cout<<"Enter the Initial Point (xa,ya): ";
    cin>>xa>>ya;
    cout<<"Enter the Final Point (xb,yb): ";
    cin>>xb>>yb;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("20-42970-1_DDA Line Algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
